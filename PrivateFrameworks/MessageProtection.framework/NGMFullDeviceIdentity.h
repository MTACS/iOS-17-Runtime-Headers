
@interface NGMFullDeviceIdentity : NSObject {
    NSMutableArray * _devicePrekeys;
    SigningKey * _deviceSigningKey;
}

@property (nonatomic, retain) NSMutableArray *devicePrekeys;
@property (nonatomic, retain) SigningKey *deviceSigningKey;

+ (id)identityWithAccess:(id)arg1 error:(id*)arg2;
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3;
+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)batchSign:(id)arg1 forType:(long long)arg2 error:(id*)arg3;
- (id)dataRepresentationWithError:(id*)arg1;
- (bool)deleteKeyWithTag:(id)arg1;
- (id)description;
- (id)devicePrekeys;
- (id)deviceSigningKey;
- (bool)eraseFromKeyChain:(id*)arg1;
- (id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2;
- (id)keyRollingTicketWithError:(id*)arg1;
- (void)postMigrationKeychainCleanup;
- (id)publicDeviceIdentityWithError:(id*)arg1;
- (bool)requiresMigration;
- (void)setDevicePrekeys:(id)arg1;
- (void)setDeviceSigningKey:(id)arg1;
- (bool)shouldRollEncryptionIdentity;
- (id)sign:(id)arg1 forType:(long long)arg2 error:(id*)arg3;
- (id)signDataWithFormatter:(id)arg1 error:(id*)arg2;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(id /* block */)arg3;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3;
- (void)unsealMessageAndAttributes:(id)arg1 guid:(id)arg2 sendingURI:(id)arg3 sendingPushToken:(id)arg4 receivingURI:(id)arg5 receivingPushToken:(id)arg6 signedByPublicIdentity:(id)arg7 decryptionBlock:(id /* block */)arg8;
- (void)unsealMessageAndAttributes:(id)arg1 guid:(id)arg2 signedByPublicIdentity:(id)arg3 decryptionBlock:(id /* block */)arg4;
- (void)unsealMessageAndAttributes:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(id /* block */)arg3;
- (bool)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2;

@end
