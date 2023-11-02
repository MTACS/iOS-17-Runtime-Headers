
@protocol AASignOutFlowControllerDelegate <NSObject>

@optional

- (void)signOutFlowController:(void *)arg1 disableFindMyDeviceForAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AASignOutFlowController *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)signOutFlowController:(void *)arg1 performWalrusValidationForAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AASignOutFlowController *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)signOutFlowController:(void *)arg1 showAlertWithTitle:(void *)arg2 message:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AASignOutFlowController *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)signOutFlowController:(void *)arg1 signOutAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AASignOutFlowController *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
