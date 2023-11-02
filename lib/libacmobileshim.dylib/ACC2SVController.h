
@interface ACC2SVController : NSObject <ACC2SVAuthenticationUIControllerDelegate, ACC2SVControllerProtocol> {
    ACFMessage * _authRequest;
    id /* block */  _completionBlock;
    ACC2SVTrustedDeviceObject * _currentDevice;
    <ACC2SVControllerDelegate> * _delegate;
    <ACC2SVAuthenticationUIControllerProtocol> * _secondFactorAuthUIController;
    <ACC2SVTransportControllerProtocol> * _transportController;
}

@property (nonatomic, retain) ACFMessage *authRequest;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) ACC2SVTrustedDeviceObject *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACC2SVControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Class deviceObjectClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ACC2SVAuthenticationUIControllerProtocol> *secondFactorAuthUIController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ACCTicketManagerProtocol> *ticketManager;
@property (nonatomic, retain) <ACC2SVTransportControllerProtocol> *transportController;

- (id)authRequest;
- (void)cancel2SVAuthentication;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (id)createCancelError;
- (id)createTrustedDeviceWithDictionary:(id)arg1;
- (id)currentDevice;
- (void)dealloc;
- (id)delegate;
- (Class)deviceObjectClass;
- (void)enterAndVerifySecureCodeOfLength:(unsigned long long)arg1;
- (void)enterCredentials;
- (void)generateAndSendSecCodeToDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)goBackToTrustedDevices;
- (void)handleErrorOnGetTrustedDevices:(id)arg1;
- (void)handleErrorOnResendSecurityCode:(id)arg1 alertCancelled:(bool)arg2;
- (void)handleErrorOnSendSecurityCode:(id)arg1 alertCancelled:(bool)arg2;
- (void)hideUIAndReturnError:(id)arg1;
- (void)hideUIWithCompletion:(id /* block */)arg1;
- (unsigned long long)passcodeLengthFromEncryptedContent:(id)arg1 withHmac:(id)arg2 context:(id)arg3;
- (void)perform2StepVerificationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshTrustedDevicesList;
- (void)reportError:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)secondFactorAuthUIController;
- (void)sendVerificationCodeToDevice:(id)arg1;
- (void)setAuthRequest:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSecondFactorAuthUIController:(id)arg1;
- (void)setTransportController:(id)arg1;
- (id)ssoTokenWithResponse:(id)arg1 context:(id)arg2;
- (void)start2StepVerificationWithRequest:(id)arg1;
- (id)ticketManager;
- (id)transportController;
- (id)trustedDevicesFromResponse:(id)arg1 withContext:(id)arg2;
- (void)uiController:(id)arg1 getImageWithURL:(id)arg2 completion:(id /* block */)arg3;
- (void)uiController:(id)arg1 resendVerificationCodeWithCompletion:(id /* block */)arg2;
- (void)uiControllerCancelGettingImages:(id)arg1;
- (void)uiControllerHideViewAnimated:(id)arg1;
- (id)uiControllerRealm:(id)arg1;
- (void)uiControllerRefreshDeviceList:(id)arg1;
- (id)uiControllerSelectedDevice:(id)arg1;
- (void)uiControllerSetup:(id)arg1;
- (id)uiControllerTitle:(id)arg1;
- (void)uiControllerUserIsUnableToReceiveVerificationCode:(id)arg1;
- (void)updateSSOToken:(id)arg1 withServiceTicket:(id)arg2 request:(id)arg3;
- (void)verifySecureCode:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)verifySecurityCodeDidFailWithError:(id)arg1;
- (void)verifySecurityCodeDidFinishWithToken:(id)arg1;

@end
