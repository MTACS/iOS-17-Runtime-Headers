
@protocol MUPlatterViewStyleProviding <NSObject>

@required

- (long long)backgroundStyle;
- (UIColor *)fillColor;
- (UIVisualEffect *)visualEffectForTraitCollection:(UITraitCollection *)arg1;

@end
