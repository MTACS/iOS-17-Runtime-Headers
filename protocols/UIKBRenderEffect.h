
@protocol UIKBRenderEffect <NSObject, NSCopying>

@required

- (struct CGColor { }*)CGColor;
- (UIKBGradient *)gradient;
- (bool)isValid;
- (void)renderEffectWithRenderer:(UIKBRenderer *)arg1 traits:(UIKBRenderTraits *)arg2;
- (bool)renderUnder;
- (void)setWeight:(double)arg1;
- (bool)usesRGBColors;
- (double)weight;

@end
