
@protocol ACC2SVAuthenticationUIControllerDelegate <NSObject>

@required

- (void)uiController:(void *)arg1 getImageWithURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <ACC2SVAuthenticationUIControllerProtocol> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)uiController:(void *)arg1 resendVerificationCodeWithCompletion:(void *)arg2; // needs 2 arg types, found 7: <ACC2SVAuthenticationUIControllerProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)uiControllerCancelGettingImages:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerHideViewAnimated:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerRefreshDeviceList:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerSetup:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerUserIsUnableToReceiveVerificationCode:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;

@optional

- (NSString *)uiControllerMyAppleConnectURL:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (NSString *)uiControllerRealm:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (int)uiControllerRequestSenderProcessID:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (ACC2SVTrustedDeviceObject *)uiControllerSelectedDevice:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (NSString *)uiControllerTitle:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerUserNeedsToAddTrustedDevices:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;

@end
