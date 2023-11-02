
@protocol HKInteractiveChartCurrentValueViewCallbacks <NSObject>

@required

- (void)didTapOnDateFromCurrentValueView:(UIView *)arg1;
- (void)didTapOnInfoButtonFromCurrentValueView:(UIView *)arg1;
- (NSString *)stringForValueRange:(HKValueRange *)arg1 timeScope:(long long)arg2;

@end
