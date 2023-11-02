
@interface TIAppAutofillManagerMock : NSObject <TIAppAutofillManaging> {
    bool  _hasOneTimeCode;
    TIKeyboardSecureCandidateRenderer * _secureCandidateRenderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasOneTimeCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 completion:(id /* block */)arg3;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateJustHMEAutofillFormSuggestionWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 applicationID:(id)arg3 applicationBundleID:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (bool)hasOneTimeCode;
- (id)init;
- (void)obtainCredential:(id)arg1;
- (void)presentHideMyEmailUI:(id)arg1 keyboardState:(id)arg2 completion:(id /* block */)arg3;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (void)reset;
- (id)secureCandidateRenderer;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(id /* block */)arg2;

@end
