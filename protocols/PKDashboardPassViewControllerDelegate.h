
@protocol PKDashboardPassViewControllerDelegate <NSObject>

@required

- (void)dashboardPassViewController:(PKDashboardPassViewController *)arg1 didRequestPaymentForPass:(PKPaymentPass *)arg2 fromButton:(bool)arg3;

@optional

- (bool)canRequestPaymentForPass:(PKPaymentPass *)arg1;

@end
