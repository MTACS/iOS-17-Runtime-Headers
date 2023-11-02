
@protocol DCBioBindingProtocol <NSObject>

@required

- (void)deleteGlobalAuthACLWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)establishPrearmTrustV2:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DCCredentialTrust *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialAttestation *, NSError *, void*
- (void)nonceForAuthorizationTokenWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialNonce *, NSError *, void*
- (void)prearmCredentialWithAuthorizationToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DCCredentialAuthorizationToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
