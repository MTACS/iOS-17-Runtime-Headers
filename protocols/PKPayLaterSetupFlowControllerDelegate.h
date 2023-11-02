
@protocol PKPayLaterSetupFlowControllerDelegate <NSObject>

@required

- (void)payLaterSetupFlowController:(PKPayLaterSetupFlowController *)arg1 didSelect:(PKPayLaterFinancingOption *)arg2;
- (void)payLaterSetupFlowController:(PKPayLaterSetupFlowController *)arg1 didTerminateApplicationState:(unsigned long long)arg2;

@optional

- (void)payLaterSetupFlowControllerDidFinish:(PKPayLaterSetupFlowController *)arg1;

@end
