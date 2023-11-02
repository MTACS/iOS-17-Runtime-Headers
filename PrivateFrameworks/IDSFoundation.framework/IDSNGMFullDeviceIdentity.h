
@interface IDSNGMFullDeviceIdentity : NSObject

+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3;
+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;

- (id)batchSign:(id)arg1 forType:(long long)arg2 error:(id*)arg3;
- (id)dataRepresentationWithError:(id*)arg1;
- (bool)eraseFromKeyChain:(id*)arg1;
- (id)keyRollingTicketWithError:(id*)arg1;
- (id)publicDeviceIdentityWithError:(id*)arg1;
- (bool)shouldRollEncryptionIdentity;
- (id)sign:(id)arg1 forType:(long long)arg2 error:(id*)arg3;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(id /* block */)arg3;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3;
- (void)unsealMessageAndAttributes:(id)arg1 guid:(id)arg2 signedByPublicIdentity:(id)arg3 decryptionBlock:(id /* block */)arg4;
- (void)unsealMessageAndAttributes:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(id /* block */)arg3;
- (bool)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2;

@end
