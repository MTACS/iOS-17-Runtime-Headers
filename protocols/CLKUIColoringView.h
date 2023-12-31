
@protocol CLKUIColoringView <NSObject>

@required

- (UIColor *)color;
- (UIColor *)overrideColor;
- (void)setColor:(UIColor *)arg1;
- (void)setOverrideColor:(UIColor *)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (bool)usesLegibility;

@optional

- (UIColor *)contentColor;

@end
