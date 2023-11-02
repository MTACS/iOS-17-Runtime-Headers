
@interface WK_RTCCodecSpecificInfoH265 : NSObject <RTCCodecSpecificInfo> {
    unsigned long long  _packetizationMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long packetizationMode;
@property (readonly) Class superclass;

- (struct CodecSpecificInfo { int x1; union CodecSpecificInfoUnion { struct CodecSpecificInfoVP8 { bool x_1_2_1; unsigned char x_1_2_2; bool x_1_2_3; BOOL x_1_2_4; bool x_1_2_5; unsigned long long x_1_2_6[3]; unsigned long long x_1_2_7; unsigned long long x_1_2_8[3]; unsigned long long x_1_2_9; } x_2_1_1; struct CodecSpecificInfoVP9 { bool x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; bool x_2_2_5; unsigned char x_2_2_6; bool x_2_2_7; bool x_2_2_8; unsigned char x_2_2_9; unsigned long long x_2_2_10; unsigned long long x_2_2_11; bool x_2_2_12; unsigned short x_2_2_13[8]; unsigned short x_2_2_14[8]; struct GofInfoVP9 { unsigned long long x_15_3_1; unsigned char x_15_3_2[255]; bool x_15_3_3[255]; unsigned char x_15_3_4[255]; unsigned char x_15_3_5[255][3]; unsigned short x_15_3_6; } x_2_2_15; unsigned char x_2_2_16; unsigned char x_2_2_17[3]; bool x_2_2_18; } x_2_1_2; struct CodecSpecificInfoH264 { int x_3_2_1; unsigned char x_3_2_2; bool x_3_2_3; bool x_3_2_4; } x_2_1_3; struct CodecSpecificInfoH265 { int x_4_2_1; bool x_4_2_2; } x_2_1_4; } x2; })nativeCodecSpecificInfo;
- (unsigned long long)packetizationMode;
- (void)setPacketizationMode:(unsigned long long)arg1;

@end
