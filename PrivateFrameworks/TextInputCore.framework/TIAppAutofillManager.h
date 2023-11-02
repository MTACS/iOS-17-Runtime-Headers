
@interface TIAppAutofillManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver, TIAppAutofillManaging> {
    NSString * _clientIdentifierForLastAutofillGeneration;
    NSString * _clientIdentifierForLastKeyboardSync;
    NSDate * _dateOfLastPasswordAutoFill;
    NSUUID * _documentIdentifierForLastAutofillGeneration;
    LAContext * _laContext;
    NSString * _lastAutofilledUsername;
    SFAppAutoFillOneTimeCodeProvider * _oneTimeCodeProvider;
    SFAppAutoFillPasskeyProvider * _passkeyProvider;
    NSObject<OS_dispatch_queue> * _privateQueue;
    TICredentialCustomInfo * _queuedCustomInfo;
    TICredentialCustomInfo * _queuedUnauthenticatedCustomInfo;
    TIKeyboardSecureCandidateRenderer * _secureCandidateRenderer;
    bool  hasOneTimeCode;
}

@property (nonatomic, retain) NSString *clientIdentifierForLastAutofillGeneration;
@property (nonatomic, retain) NSString *clientIdentifierForLastKeyboardSync;
@property (nonatomic, retain) NSDate *dateOfLastPasswordAutoFill;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (nonatomic, readonly) bool hasOneTimeCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LAContext *laContext;
@property (nonatomic, copy) NSString *lastAutofilledUsername;
@property (nonatomic, readonly) SFAppAutoFillPasskeyProvider *passkeyProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic, retain) TICredentialCustomInfo *queuedCustomInfo;
@property (nonatomic, retain) TICredentialCustomInfo *queuedUnauthenticatedCustomInfo;
@property (nonatomic, readonly) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) Class superclass;

+ (void)_fetchCredentialsWithPasskeyProvider:(id)arg1 autofillContext:(id)arg2 textContentType:(id)arg3 applicationIdentifier:(id)arg4 auditToken:(struct { unsigned int x1[8]; })arg5 completion:(id /* block */)arg6;
+ (bool)_simulatesAutofillCandidates;
+ (void)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)setSharedAppAutofillManager:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_autoFillPayloadForPasskey:(id)arg1 keyboardInfoType:(unsigned long long*)arg2;
- (id)_autoFillPayloadForPasswordCredential:(id)arg1 keyboardInfoType:(unsigned long long*)arg2;
- (void)_finishAutofillFormCandidatesOnMainThreadWithCredentials:(id)arg1 renderTraits:(id)arg2 documentIdentifier:(id)arg3 clientIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (id)_secureCandidateForPasskey:(id)arg1 fromLocalizedStringKey:(id)arg2;
- (id)_secureCandidateForPasswordCredential:(id)arg1 fromLocalizedStringKey:(id)arg2;
- (id)clientIdentifierForLastAutofillGeneration;
- (id)clientIdentifierForLastKeyboardSync;
- (id)customInfoFromCredential:(id)arg1;
- (id)dateOfLastPasswordAutoFill;
- (id)documentIdentifierForLastAutofillGeneration;
- (void)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 completion:(id /* block */)arg3;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateHideMyEmailCandidateWithSlotID:(unsigned int)arg1 applicationBundleId:(id)arg2 applicationId:(id)arg3 keyboardState:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)generateJustHMEAutofillFormSuggestionWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 applicationID:(id)arg3 applicationBundleID:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (bool)hasAutofillContextEntitlementForConnection:(id)arg1;
- (bool)hasOneTimeCode;
- (id)initPrivate;
- (bool)isValidedString:(id)arg1;
- (id)laContext;
- (id)lastAutofilledUsername;
- (void)obtainCredential:(id)arg1;
- (void)oneTimeCodeProvider:(id)arg1 didUpdateOneTimeCode:(id)arg2;
- (void)oneTimeCodeProviderReceivedCode:(id)arg1;
- (id)passkeyProvider;
- (void)presentHideMyEmailUI:(id)arg1 keyboardState:(id)arg2 completion:(id /* block */)arg3;
- (id)privateQueue;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (id)queuedCustomInfo;
- (id)queuedUnauthenticatedCustomInfo;
- (void)reset;
- (id)secureCandidateRenderer;
- (void)setClientIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setClientIdentifierForLastKeyboardSync:(id)arg1;
- (void)setDateOfLastPasswordAutoFill:(id)arg1;
- (void)setDocumentIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setLaContext:(id)arg1;
- (void)setLastAutofilledUsername:(id)arg1;
- (void)setQueuedCustomInfo:(id)arg1;
- (void)setQueuedUnauthenticatedCustomInfo:(id)arg1;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldAuthenticateToAcceptAutofill;

@end
