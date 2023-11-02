
@interface MFPLevelsEffect : MFPEffect {
    int  mHighlight;
    int  mMidtone;
    int  mShadow;
}

+ (id)GUID;

- (id)initWithHighlight:(int)arg1 midtone:(int)arg2 shadow:(int)arg3;

@end
