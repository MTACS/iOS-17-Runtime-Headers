
@interface MFPBrightnessContrastEffect : MFPEffect {
    int  mBrightness;
    int  mContrast;
}

+ (id)GUID;

- (id)initWithBrightness:(int)arg1 contrast:(int)arg2;

@end
