
@protocol SFDialogPresenting <NSObject>

@required

- (WBSPermissionDialogThrottler *)permissionDialogThrottler;
- (void)presentDialog:(SFDialog *)arg1 sender:(id)arg2;

@end
