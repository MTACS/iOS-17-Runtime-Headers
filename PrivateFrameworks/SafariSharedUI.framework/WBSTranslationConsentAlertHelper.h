
@interface WBSTranslationConsentAlertHelper : NSObject <UIAdaptivePresentationControllerDelegate> {
    id /* block */  _consentCompletionHandler;
    UIViewController * _currentlyPresentedViewController;
    <WBSTranslationConsentAlertHelperDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSTranslationConsentAlertHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletionHandlerIfNeededWithConsent:(bool)arg1;
- (void)_enableTranslation:(id)arg1;
- (void)_notNow:(id)arg1;
- (id)consentAlertForType:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
