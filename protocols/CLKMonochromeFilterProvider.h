
@protocol CLKMonochromeFilterProvider <NSObject>

@required

- (UIColor *)colorForView:(UIView *)arg1 accented:(bool)arg2;
- (CAFilter *)filterForView:(UIView *)arg1 style:(long long)arg2;
- (CAFilter *)filterForView:(UIView *)arg1 style:(long long)arg2 fraction:(double)arg3;
- (NSArray *)filtersForView:(UIView *)arg1 style:(long long)arg2;
- (NSArray *)filtersForView:(UIView *)arg1 style:(long long)arg2 fraction:(double)arg3;

@optional

- (CLKDevice *)device;
- (UIColor *)interpolatedColorForView:(UIView *)arg1;
- (bool)viewShouldIgnoreTwoPieceImage:(UIView *)arg1;

@end
