
@protocol AKStrokedAnnotationProtocol <NSObject>

@required

- (long long)brushStyle;
- (bool)hasShadow;
- (bool)isDashed;
- (void)setBrushStyle:(long long)arg1;
- (void)setDashed:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setStrokeColor:(UIColor *)arg1;
- (void)setStrokeWidth:(double)arg1;
- (UIColor *)strokeColor;
- (double)strokeWidth;

@end
