
@protocol HKCurrentTimeViewDelegate <NSObject>

@required

- (void)currentTimeViewDidTapOnDateSelector:(HKCurrentTimeView *)arg1;
- (void)currentTimeViewDidTapOnNextTimeButton:(HKCurrentTimeView *)arg1;
- (void)currentTimeViewDidTapOnPreviousTimeButton:(HKCurrentTimeView *)arg1;

@end
