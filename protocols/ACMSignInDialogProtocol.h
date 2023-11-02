
@protocol ACMSignInDialogProtocol <NSObject>

@required

- (void)cancel;
- (<ACMSignInDialogDelegate> *)delegate;
- (void)disableControls:(bool)arg1;
- (void)hideWithParentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)passwordString;
- (NSString *)requestedUserName;
- (void)setDelegate:(id <ACMSignInDialogDelegate>)arg1;
- (void)setPasswordString:(NSString *)arg1;
- (void)setRequestedUserName:(NSString *)arg1;
- (void)showWithParentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)userNameString;

@end
