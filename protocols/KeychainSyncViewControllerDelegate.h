
@protocol KeychainSyncViewControllerDelegate <NSObject>

@required

- (void)keychainSyncController:(UIViewController<PSController> *)arg1 didFinishWithResult:(id)arg2 error:(NSError *)arg3;

@optional

- (void)keychainSyncControllerCancel:(UIViewController<PSController> *)arg1;

@end
