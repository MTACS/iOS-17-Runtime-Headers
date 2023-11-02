
@interface AKAppleIDFollowUpServerUIPresenter : NSObject <AKExtensionlessFollowUpServiceProvider, AKFollowupExtensionlessServerUIProvider> {
    AKAppleIDAuthenticationInAppExtensionContext * _authContext;
    AKAppleIDAuthenticationController * _authController;
    AKAppleIDServerUIEventHandlerImp * _eventHandler;
    AKExtensionlessFollowUpHelperContext * _followupHelperContext;
    NSURL * _initialURL;
    FLFollowUpItem * _item;
    id /* block */  _presentingClientCompletion;
    id /* block */  _serverUICompletion;
    AKAppleIDServerUIContextController * _serverUIContextController;
}

@property (nonatomic, copy) AKAppleIDAuthenticationInAppExtensionContext *authContext;
@property (nonatomic, copy) AKExtensionlessFollowUpHelperContext *followupHelperContext;

- (void).cxx_destruct;
- (id)_fetchCurrentFollowUpItem;
- (void)_performAuthKitActionWithResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3;
- (void)_performClientCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_prepareServerUIContext;
- (void)_presentServerUIWithConfiguration:(id)arg1;
- (bool)_shouldSignWithIDMSAppleIDHeader;
- (void)_signRequestAndPrepareServerConfig:(id)arg1;
- (void)_signWithIDMSAppleIDHeaderForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)acknowledgeActionTakenOnFollowUpWithIdentifier:(id)arg1 withAdditionalData:(id)arg2 completion:(id /* block */)arg3;
- (id)authContext;
- (id)followupHelperContext;
- (void)handleFinalResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3;
- (id)init;
- (void)presentServerUIWithContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAuthContext:(id)arg1;
- (void)setFollowupHelperContext:(id)arg1;
- (bool)shouldAcknowledgeUserAction;
- (void)signAdditionalHeadersWithRequest:(id)arg1;

@end
