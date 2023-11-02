
@protocol ACC2SVAuthenticationUIControllerProtocol <NSObject>

@required

- (void)chooseTrustedDeviceWithDeviceList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACC2SVTrustedDeviceObject *, void*
- (<ACC2SVAuthenticationUIControllerDelegate> *)delegate;
- (void)enterVerificationCodeWithLength:(void *)arg1 forDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, ACC2SVTrustedDeviceObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)hideUIAnimated:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resetCodeVerificationViewController;
- (void)resetTrustedDevicesViewControllerWithDeviceList:(NSArray *)arg1;
- (void)setDelegate:(id <ACC2SVAuthenticationUIControllerDelegate>)arg1;
- (void)showAlertWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)enterRecoveryKeyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)handleFailoverWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resetRecoveryCodeViewController;
- (void)serverCommunicationDidEnd;
- (void)serverCommunicationWillStart;
- (void)showSetupPromptWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
