
@protocol PKAccountFlowControllerDelegate <NSObject>

@required

- (void)accountFlowController:(PKAccountFlowController *)arg1 requestsPresentationOfDisplayableError:(NSError *)arg2;
- (void)accountFlowController:(PKAccountFlowController *)arg1 requestsPresentationOfViewController:(UIViewController *)arg2;

@end
