
@protocol PKBalanceDetailsViewControllerDelegate <NSObject>

@required

- (void)balanceDetailsViewController:(PKBalanceDetailsViewController *)arg1 didUpdateBalanceReminder:(PKPaymentBalanceReminder *)arg2 forBalance:(PKPaymentBalance *)arg3;

@end
