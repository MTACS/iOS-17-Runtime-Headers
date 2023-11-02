
@interface MFPColorBalanceEffect : MFPEffect {
    int  mCyanRed;
    int  mMagentaGreen;
    int  mYellowBlue;
}

+ (id)GUID;

- (id)initWithCyanRed:(int)arg1 magentaGreen:(int)arg2 yellowBlue:(int)arg3;

@end
