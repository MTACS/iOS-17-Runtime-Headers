
@interface MFPColorLUTEffect : MFPEffect {
    unsigned char  mLutA;
    unsigned char  mLutB;
    unsigned char  mLutG;
    unsigned char  mLutR;
}

+ (id)GUID;

- (id)initWithLUTA:(unsigned char)arg1 LUTR:(unsigned char)arg2 LUTG:(unsigned char)arg3 LUTB:(unsigned char)arg4;

@end
