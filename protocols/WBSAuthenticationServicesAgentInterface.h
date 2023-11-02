
@protocol WBSAuthenticationServicesAgentInterface

@required

- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(NSString *)arg1 relyingPartyIdentifier:(NSString *)arg2 authenticatorData:(NSData *)arg3 signature:(NSData *)arg4 userHandle:(NSData *)arg5 credentialID:(NSData *)arg6;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 relyingPartyIdentifier:(NSString *)arg2 authenticatorData:(NSData *)arg3 signature:(NSData *)arg4 userHandle:(NSData *)arg5 credentialID:(NSData *)arg6;
- (void)getExternalLoginChoiceForApplicationidentifier:(void *)arg1 relyingPartyIdentifier:(void *)arg2 credentialID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASCPlatformPublicKeyCredentialLoginChoice *, void*
- (void)getExternalLoginChoiceForWebFrameIdentifier:(void *)arg1 relyingPartyIdentifier:(void *)arg2 credentialID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WBSGlobalFrameIdentifier *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASCPlatformPublicKeyCredentialLoginChoice *, void*
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASPasskeyCredentialRequestParameters *, void*
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSGlobalFrameIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASPasskeyCredentialRequestParameters *, void*
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, WBSPasskeyAutoFillFromNearbyDeviceOptions *, void*
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WBSGlobalFrameIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, WBSPasskeyAutoFillFromNearbyDeviceOptions *, void*
- (void)test_createPasskeyWithUserName:(void *)arg1 displayName:(void *)arg2 relyingPartyIdentifier:(void *)arg3 userHandle:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)userSelectedAutoFillNearbyDevice:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSPasskeyAutoFillFromNearbyDeviceOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)userSelectedAutoFillPasskey:(void *)arg1 authenticatedLAContext:(void *)arg2 savedAccountContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: WBSAutoFillPasskey *, LAContext *, WBSSavedAccountContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end