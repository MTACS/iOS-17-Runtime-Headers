
@protocol CSEraseDeviceAuthViewControllerDelegate <NSObject>

@required

- (void)authViewController:(CSEraseDeviceAuthViewController *)arg1 didConfirmEraseAfterAuthenticationWithResults:(NSMutableDictionary *)arg2 shouldEraseDataPlan:(bool)arg3;
- (void)authViewControllerDidCancelToEraseDeviceAfterAuthentication:(CSEraseDeviceAuthViewController *)arg1;
- (void)cancelButtonTapped;

@end
