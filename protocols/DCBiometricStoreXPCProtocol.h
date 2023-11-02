
@protocol DCBiometricStoreXPCProtocol <NSObject>

@required

- (void)bioBindingUnboundACL:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)credentialAuthenticationTokenStatus:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)deleteGlobalAuthACLWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)establishPrearmTrustV2:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DCCredentialTrust *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialAttestation *, NSError *, void*
- (void)generatePhoneTokenWithNonce:(void *)arg1 keyBlob:(void *)arg2 pairingID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: DCCredentialNonce *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialAuthorizationToken *, NSError *, void*
- (void)generatePrearmTrustCertificateWithNonce:(void *)arg1 pairingID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialTrust *, NSError *, void*
- (void)getCASDCertificate:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)getProgenitorKeyAttestation:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialAttestation *, NSError *, void*
- (void)globalAuthACLTemplateUUIDsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)globalAuthACLWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialAuthACL *, NSError *, void*
- (void)migratePrearmTrustBlob:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)nonceForAuthorizationTokenWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialNonce *, NSError *, void*
- (void)passcodeBindingUnboundACL:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)prearmCredentialWithAuthorizationToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DCCredentialAuthorizationToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)revokeCredentialAuthorizationToken:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setGlobalAuthACL:(void *)arg1 ofType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setModifiedGlobalAuthACL:(void *)arg1 externalizedLAContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
