
@protocol SXComponentStyleProperties <NSObject>

@required

- (UIColor *)backgroundColor;
- (SXBorder *)border;
- (double)cornerRadius;
- (SXFill *)fill;
- (SXComponentMask *)mask;
- (double)opacity;
- (SXComponentShadow *)shadow;
- (SXDataTableStyle *)tableStyle;
- (unsigned long long)traits;

@end
