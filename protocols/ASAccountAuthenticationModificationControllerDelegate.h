
@protocol ASAccountAuthenticationModificationControllerDelegate <NSObject>

@optional

- (void)accountAuthenticationModificationController:(ASAccountAuthenticationModificationController *)arg1 didFailRequest:(ASAccountAuthenticationModificationRequest *)arg2 withError:(NSError *)arg3;
- (void)accountAuthenticationModificationController:(ASAccountAuthenticationModificationController *)arg1 didSuccessfullyCompleteRequest:(ASAccountAuthenticationModificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;

@end
