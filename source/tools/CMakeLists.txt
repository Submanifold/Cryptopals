SET( TOOLS_SRC
  break_repeating_key_xor.cc
  decrypt_single_byte_xor.cc
  detect_single_byte_xor.cc
  frequency_analysis.cc
  hamming_distance.cc
)

ADD_LIBRARY( tools ${TOOLS_SRC} )
TARGET_LINK_LIBRARIES( tools algorithms conversions )

ADD_EXECUTABLE( xor xor.cc )
TARGET_LINK_LIBRARIES( xor algorithms )
