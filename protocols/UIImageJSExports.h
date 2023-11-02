
@protocol UIImageJSExports <JSExport>

@required

- (id)CGImageRef;
- (NSString *)accessibilityHint;
- (NSString *)accessibilityLabel;
- (NSString *)accessibilityLanguage;
- (unsigned long long)accessibilityTraits;
- (NSString *)accessibilityValue;
- (double)aspectRatio;
- (TMLRect *)bounds;
- (UIColor *)colorPattern;
- (UIImage *)cropImageToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)height;
- (UIImage *)resizableImage:(TMLInsets *)arg1 :(long long)arg2;
- (double)scale;
- (void)setAccessibilityHint:(NSString *)arg1;
- (void)setAccessibilityLabel:(NSString *)arg1;
- (void)setAccessibilityLanguage:(NSString *)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(NSString *)arg1;
- (double)width;
- (UIImage *)withConfiguration:(UIImageConfiguration *)arg1;
- (UIImage *)withRenderingMode:(long long)arg1;
- (UIImage *)withTintColor:(UIColor *)arg1;

@end
