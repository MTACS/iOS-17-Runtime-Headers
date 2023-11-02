
@interface ASPublicKeyCredentialManager : NSObject <ASPublicKeyCredentialManagerInterface, _WKWebAuthenticationPanelDelegate> {
    NSMapTable * _applicationIdentifierToWeakOperation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _operationsLock;
    NSMapTable * _panelToWeakOperation;
    <ASPasskeyAutoFillManagerDelegate> * _passkeyAutoFillManagerDelegate;
    NSMutableDictionary * _uuidToOperation;
    NSMapTable * _webFrameIdentifierToWeakOperationForBrowser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ASPasskeyAutoFillManagerDelegate> *passkeyAutoFillManagerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allowedCredentialsForAssertionOptions:(id)arg1;
- (id)_asToWKCredentialAssertionOptions:(id)arg1;
- (id)_asToWKCredentialCreationOptions:(id)arg1 forCredentialKind:(unsigned long long)arg2;
- (void)_completeAssertionWithExternalPasskeyForOperation:(id)arg1 usingCredential:(id)arg2;
- (id)_createCredentialOfKind:(unsigned long long)arg1 withOptions:(id)arg2 authenticatedLAContext:(id)arg3 delegate:(id)arg4 webFrameIdentifier:(id)arg5 parentActivity:(id)arg6;
- (void)_finishAssertionForOperationWithUUID:(id)arg1 identifier:(id)arg2 authenticatedContext:(id)arg3 savedAccountContext:(id)arg4;
- (void)_getExternalLoginChoiceForOperation:(id)arg1 relyingPartyIdentifier:(id)arg2 credentialID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_getPasskeyAssertionRequestParametersForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_newOperationWithRelyingPartyIdentifier:(id)arg1 delegate:(id)arg2 sourceApplicationIdentifier:(id)arg3 webFrameIdentifier:(id)arg4 shouldRequireUserVerification:(bool)arg5 parentActivity:(id)arg6;
- (id)_newPanelForOperation:(id)arg1;
- (id)_operationForApplicationIdentifierIfExists:(id)arg1;
- (id)_operationForPanel:(id)arg1;
- (id)_operationForPanelIfExists:(id)arg1;
- (id)_operationForUUID:(id)arg1;
- (id)_operationForUUIDIfExists:(id)arg1;
- (id)_operationForWebFrameIdentifier:(id)arg1;
- (void)_queryExternalLoginChoicesForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_tearDownOperationWithUUID:(id)arg1;
- (void)_updateLastUsedDateForPasskeySavedAccountWithCredential:(id)arg1 operation:(id)arg2;
- (id)allPasskeysDataForRelyingParty:(id)arg1;
- (void)assertUsingAutoFillPasskeyWithIdentifier:(id)arg1 authenticatedContext:(id)arg2 savedAccountContext:(id)arg3 forOperationUUID:(id)arg4;
- (void)assertUsingPlatformCredentialForLoginChoice:(id)arg1 authenticatedContext:(id)arg2;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(id)arg1;
- (id)autoFillOperationUUIDForApplicationIdentifier:(id)arg1;
- (id)autoFillOperationUUIDForWebFrameIdentifier:(id)arg1;
- (id)autoFillPasskeysForOperationUUID:(id)arg1;
- (id)beginAssertionsWithOptions:(id)arg1 forProcessWithApplicationIdentifier:(id)arg2 delegate:(id)arg3 requestStyle:(long long)arg4 webFrameIdentifier:(id)arg5 parentActivity:(id)arg6;
- (id)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)arg1 delegate:(id)arg2 webFrameIdentifier:(id)arg3 parentActivity:(id)arg4;
- (id)browserPasskeysForRelyingParty:(id)arg1;
- (void)cancelOperationIfNecessaryWithUUID:(id)arg1 overrideError:(id)arg2;
- (void)clearAllCredentials;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(id)arg1 usingCredential:(id)arg2;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(id)arg1 usingCredential:(id)arg2;
- (void)computeClientDataIfNeededForAssertionOptions:(id)arg1;
- (void)computeClientDataIfNeededForCreationOptions:(id)arg1;
- (id)createNewPlatformCredentialWithOptions:(id)arg1 authenticatedContext:(id)arg2 delegate:(id)arg3 webFrameIdentifier:(id)arg4 parentActivity:(id)arg5;
- (bool)deleteAllPasskeysForRelyingParty:(id)arg1 error:(id*)arg2;
- (bool)deletePasskeyForRelyingParty:(id)arg1 withCredentialID:(id)arg2 error:(id*)arg3;
- (id)encodeGetAssertionCommandWithOptions:(id)arg1 authenticatorUserVerificationAvailability:(unsigned long long)arg2 authenticatorSupportedExtensions:(id)arg3;
- (id)encodeMakeCredentialCommandWithOptions:(id)arg1 authenticatorUserVerificationAvailability:(unsigned long long)arg2 authenticatorSupportedExtensions:(id)arg3;
- (void)getExternalLoginChoiceForApplicationIdentifier:(id)arg1 relyingPartyIdentifier:(id)arg2 credentialID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getExternalLoginChoiceForWebFrameIdentifier:(id)arg1 relyingPartyIdentifier:(id)arg2 credentialID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)internalErrorToWKErrorIfApplicable:(id)arg1;
- (void)panel:(id)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
- (void)panel:(id)arg1 requestLAContextForUserVerificationWithCompletionHandler:(id /* block */)arg2;
- (void)panel:(id)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)panel:(id)arg1 selectAssertionResponse:(id)arg2 source:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)panel:(id)arg1 updateWebAuthenticationPanel:(long long)arg2;
- (id)passkeyAutoFillManagerDelegate;
- (void)presentCABLESheetForOperationUUID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setPasskeyAutoFillManagerDelegate:(id)arg1;

@end
