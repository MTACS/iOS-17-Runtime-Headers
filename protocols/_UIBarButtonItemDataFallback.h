
@protocol _UIBarButtonItemDataFallback <NSObject>

@required

- (NSString *)backIndicatorTextStyleForSymbolConfiguration;
- (UIImage *)backgroundImageForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset { double x1; double x2; })backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (UIColor *)colorForState:(long long)arg1 style:(long long)arg2;
- (UIFont *)fontForState:(long long)arg1 style:(long long)arg2;
- (NSString *)textStyleForSymbolConfiguration;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;

@end
