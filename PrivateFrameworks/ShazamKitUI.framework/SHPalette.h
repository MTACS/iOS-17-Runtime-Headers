
@interface SHPalette : NSObject

+ (double)contentsScale;
+ (id)default;
+ (struct CGColor { }*)sh_colorNamed:(id)arg1;

- (struct CGColor { }*)R:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (struct CGColor { }*)alternateTintColor;
- (struct CGColor { }*)appTintColor;
- (struct CGColor { }*)blackColor;
- (struct CGColor { }*)clearColor;
- (struct CGColor { }*)listeningButtonBackgroundColor;
- (struct CGColor { }*)listeningButtonBackgroundTransparentColor;
- (struct CGColor { }*)listeningButtonShazamShapeColor;
- (struct CGColor { }*)listeningButtonTopBorderColor;
- (struct CGColor { }*)listeningCircleColor;
- (struct CGColor { }*)shadowColor;
- (struct CGColor { }*)shazamColorNearBlack;

@end
