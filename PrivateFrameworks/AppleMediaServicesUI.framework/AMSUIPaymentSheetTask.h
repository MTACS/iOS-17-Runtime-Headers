
@interface AMSUIPaymentSheetTask : AMSPaymentSheetTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationController:(id)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)arg1;
- (id)presentationWindowForPaymentAuthorizationController:(id)arg1;

@end
