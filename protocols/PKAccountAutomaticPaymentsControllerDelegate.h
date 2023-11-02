
@protocol PKAccountAutomaticPaymentsControllerDelegate <NSObject>

@required

- (void)accountAutomaticPaymentsController:(PKAccountAutomaticPaymentsController *)arg1 didSchedulePayment:(PKAccountPayment *)arg2;
- (NSString *)presentationSceneIdentifierForAccountAutomaticPaymentsController:(PKAccountAutomaticPaymentsController *)arg1;

@optional

- (void)accountAutomaticPaymentsControllerDidSelectSetupCompletionDone:(PKAccountAutomaticPaymentsController *)arg1 viewController:(PKAccountAutomaticPaymentsSetupCompleteViewController *)arg2;

@end
