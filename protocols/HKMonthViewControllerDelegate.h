
@protocol HKMonthViewControllerDelegate

@required

- (void)didTapBackButtonForMonthViewController:(HKMonthViewController *)arg1;
- (void)monthViewController:(HKMonthViewController *)arg1 didSelectDate:(NSDate *)arg2;

@end
