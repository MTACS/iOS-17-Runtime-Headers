
@protocol ASPublicKeyCredentialManagerInterface <NSObject>

@required

- (NSArray *)allPasskeysDataForRelyingParty:(NSString *)arg1;
- (void)assertUsingAutoFillPasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg1 authenticatedContext:(LAContext *)arg2 savedAccountContext:(WBSSavedAccountContext *)arg3 forOperationUUID:(NSUUID *)arg4;
- (void)assertUsingPlatformCredentialForLoginChoice:(ASCPlatformPublicKeyCredentialLoginChoice *)arg1 authenticatedContext:(LAContext *)arg2;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(ASCSecurityKeyPublicKeyCredentialLoginChoice *)arg1;
- (NSUUID *)autoFillOperationUUIDForApplicationIdentifier:(NSString *)arg1;
- (NSUUID *)autoFillOperationUUIDForWebFrameIdentifier:(ASGlobalFrameIdentifier *)arg1;
- (WBSPair *)autoFillPasskeysForOperationUUID:(NSUUID *)arg1;
- (NSUUID *)beginAssertionsWithOptions:(NSArray *)arg1 forProcessWithApplicationIdentifier:(NSString *)arg2 delegate:(id <ASPublicKeyCredentialManagerDelegate>)arg3 requestStyle:(long long)arg4 webFrameIdentifier:(ASGlobalFrameIdentifier *)arg5 parentActivity:(NSObject<OS_os_activity> *)arg6;
- (NSUUID *)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(ASCPublicKeyCredentialCreationOptions *)arg1 delegate:(id <ASPublicKeyCredentialManagerDelegate>)arg2 webFrameIdentifier:(ASGlobalFrameIdentifier *)arg3 parentActivity:(NSObject<OS_os_activity> *)arg4;
- (NSArray *)browserPasskeysForRelyingParty:(NSString *)arg1;
- (void)cancelOperationIfNecessaryWithUUID:(NSUUID *)arg1 overrideError:(NSError *)arg2;
- (void)clearAllCredentials;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(NSString *)arg1 usingCredential:(ASCPlatformPublicKeyCredentialAssertion *)arg2;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 usingCredential:(ASCPlatformPublicKeyCredentialAssertion *)arg2;
- (void)computeClientDataIfNeededForAssertionOptions:(ASCPublicKeyCredentialAssertionOptions *)arg1;
- (void)computeClientDataIfNeededForCreationOptions:(ASCPublicKeyCredentialCreationOptions *)arg1;
- (NSUUID *)createNewPlatformCredentialWithOptions:(ASCPublicKeyCredentialCreationOptions *)arg1 authenticatedContext:(LAContext *)arg2 delegate:(id <ASPublicKeyCredentialManagerDelegate>)arg3 webFrameIdentifier:(ASGlobalFrameIdentifier *)arg4 parentActivity:(NSObject<OS_os_activity> *)arg5;
- (bool)deleteAllPasskeysForRelyingParty:(NSString *)arg1 error:(id*)arg2;
- (bool)deletePasskeyForRelyingParty:(NSString *)arg1 withCredentialID:(NSData *)arg2 error:(id*)arg3;
- (WBSPair *)encodeGetAssertionCommandWithOptions:(ASCPublicKeyCredentialAssertionOptions *)arg1 authenticatorUserVerificationAvailability:(unsigned long long)arg2 authenticatorSupportedExtensions:(NSArray *)arg3;
- (WBSPair *)encodeMakeCredentialCommandWithOptions:(ASCPublicKeyCredentialCreationOptions *)arg1 authenticatorUserVerificationAvailability:(unsigned long long)arg2 authenticatorSupportedExtensions:(NSArray *)arg3;
- (void)getExternalLoginChoiceForApplicationIdentifier:(void *)arg1 relyingPartyIdentifier:(void *)arg2 credentialID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASCPlatformPublicKeyCredentialLoginChoice *, void*
- (void)getExternalLoginChoiceForWebFrameIdentifier:(void *)arg1 relyingPartyIdentifier:(void *)arg2 credentialID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WBSGlobalFrameIdentifier *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASCPlatformPublicKeyCredentialLoginChoice *, void*
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASPasskeyCredentialRequestParameters *, void*
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSGlobalFrameIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASPasskeyCredentialRequestParameters *, void*
- (NSError *)internalErrorToWKErrorIfApplicable:(NSError *)arg1;
- (<ASPasskeyAutoFillManagerDelegate> *)passkeyAutoFillManagerDelegate;
- (void)presentCABLESheetForOperationUUID:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setPasskeyAutoFillManagerDelegate:(id <ASPasskeyAutoFillManagerDelegate>)arg1;

@end
