
@protocol VSApplicationControllerDelegate <NSObject>

@required

- (void)applicationController:(VSApplicationController *)arg1 didReceiveViewModel:(VSViewModel *)arg2;
- (void)applicationController:(VSApplicationController *)arg1 didReceiveViewModelError:(NSError *)arg2;
- (void)applicationController:(VSApplicationController *)arg1 request:(VSApplicationControllerRequest *)arg2 didCompleteWithResponse:(VSApplicationControllerResponse *)arg3;
- (void)applicationController:(VSApplicationController *)arg1 request:(VSApplicationControllerRequest *)arg2 didFailWithError:(NSError *)arg3;
- (bool)applicationController:(VSApplicationController *)arg1 requestsAlert:(VSApplicationControllerAlert *)arg2;
- (void)applicationController:(VSApplicationController *)arg1 startDidFailWithError:(NSError *)arg2;
- (void)applicationControllerDidStart:(VSApplicationController *)arg1;

@optional

- (void)applicationControllerDidStop:(VSApplicationController *)arg1;

@end
