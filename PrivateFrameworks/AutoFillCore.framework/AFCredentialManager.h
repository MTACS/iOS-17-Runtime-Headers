
@interface AFCredentialManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver> {
    LAContext * _laContext;
    SFAppAutoFillOneTimeCodeProvider * _oneTimeCodeProvider;
    SFAppAutoFillPasskeyProvider * _passkeyProvider;
    NSDictionary * _queuedCustomInfo;
    NSDictionary * _queuedUnauthenticatedCustomInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LAContext *laContext;
@property (nonatomic, retain) NSDictionary *queuedCustomInfo;
@property (nonatomic, retain) NSDictionary *queuedUnauthenticatedCustomInfo;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_autoFillPayloadForPasskey:(id)arg1 customInfoType:(unsigned long long*)arg2;
- (id)_autoFillPayloadForPasswordCredential:(id)arg1 customInfoType:(unsigned long long*)arg2;
- (void)_consumeOneTimeCodeAutoFillSuggestionIfNeeded:(id)arg1;
- (id)_suggestionForPasskey:(id)arg1 autoFillPayload:(id)arg2 customInfoType:(unsigned long long)arg3;
- (id)_suggestionForPasswordCredential:(id)arg1 autoFillPayload:(id)arg2 customInfoType:(unsigned long long)arg3;
- (void)generateHideMyEmailAutoFillWithRenderTraits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateHideMyEmailSuggestionWithApplicationBundleId:(id)arg1 applicationId:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)generateLoginAutoFillWithDocumentTraits:(id)arg1;
- (void)generateOneTimeCodeAutoFillSuggestionsWithDocumentTraits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateSignupAutoFillWithAutoFillMode:(unsigned long long)arg1 documentTraits:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getCredentialsWithApplicationIdentifier:(id)arg1 documentTraits:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasAutoFillContextEntitlementForConnection:(id)arg1;
- (id)initPrivate;
- (id)laContext;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (void)oneTimeCodeProviderReceivedCode:(id)arg1;
- (id)queuedCustomInfo;
- (id)queuedUnauthenticatedCustomInfo;
- (void)setLaContext:(id)arg1;
- (void)setQueuedCustomInfo:(id)arg1;
- (void)setQueuedUnauthenticatedCustomInfo:(id)arg1;
- (void)shouldAcceptAutoFill:(id)arg1 withPayload:(id)arg2 documentTraits:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)shouldAuthenticateToAcceptAutoFill;

@end
