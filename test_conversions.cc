#include "conversions.hh"

int main(int, char**)
{
  std::string s  = "Man is distinguished, not only by his reason, but by this singular passion "
                   "from other animals, which is a lust of the mind, that by a perseverance of "
                   "delight in the continued and indefatigable generation of knowledge, exceeds "
                   "the short vehemence of any carnal pleasure.";

  std::string t = "TWFuIGlzIGRpc3Rpbmd1aXNoZWQsIG5vdCBvbmx5IGJ5IGhpcyByZWFzb24sIGJ1dCBieSB0aGlz"
                  "IHNpbmd1bGFyIHBhc3Npb24gZnJvbSBvdGhlciBhbmltYWxzLCB3aGljaCBpcyBhIGx1c3Qgb2Yg"
                  "dGhlIG1pbmQsIHRoYXQgYnkgYSBwZXJzZXZlcmFuY2Ugb2YgZGVsaWdodCBpbiB0aGUgY29udGlu"
                  "dWVkIGFuZCBpbmRlZmF0aWdhYmxlIGdlbmVyYXRpb24gb2Yga25vd2xlZGdlLCBleGNlZWRzIHRo"
                  "ZSBzaG9ydCB2ZWhlbWVuY2Ugb2YgYW55IGNhcm5hbCBwbGVhc3VyZS4=";

  if( toBase64( s.c_str(), s.length() ) != t )
    return -1;

  std::string hex    = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
  std::string bytes  = toBytes(hex.c_str(), hex.length());
  std::string base64 = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";

  if( toBase64( bytes.c_str(), bytes.length() ) != base64 )
    return -2;

  return 0;
}