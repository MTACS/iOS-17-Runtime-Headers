
@protocol _UIStatusBarCellularItemTypeStringProvider <NSObject>

@required

- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;
- (UIFont *)condensedFontForCellularType:(long long)arg1 defaultFont:(UIFont *)arg2 baselineOffset:(double*)arg3;
- (NSString *)stringForCellularType:(long long)arg1 condensed:(bool)arg2;

@end
