
@protocol ASCAgentProtocol <NSObject>

@required

- (void)browserPasskeysForRelyingParty:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)cancelCurrentRequest;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deleteAllPasskeysForRelyingParty:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deletePasskeyForRelyingParty:(void *)arg1 withCredentialID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getArePasskeysDisallowedForRelyingParty:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getPasskeysDataForRelyingParty:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)openCABLEURL:(void *)arg1 fromSourceApplication:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)openCredentialProviderAppSettingsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)openVerificationCodeAppSettingsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performAuthorizationRequestsForContext:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: ASCCredentialRequestContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (void)performSilentAuthorizationRequestsForContext:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: ASCCredentialRequestContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (void)preflightCanCreateICloudKeychainPasskeyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
