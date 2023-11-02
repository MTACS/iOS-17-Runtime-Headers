
@interface HMMTRMatterKeypair : HMFObject <HMFLogging, MTRKeypair> {
    bool  _initialized;
    NSString * _keychainAccount;
    struct __SecKey { } * _privateKey;
    struct __SecKey { } * _publicKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool initialized;
@property (retain) NSString *keychainAccount;
@property (readonly) struct __SecKey { }*privateKey;
@property (readonly) struct __SecKey { }*publicKey;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_generateKeys;
- (id)_getPrivateKeydata;
- (bool)_reloadWithData:(id)arg1;
- (bool)_storePrivateKeyData:(id)arg1;
- (bool)deserialize:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (bool)initialize;
- (bool)initialized;
- (id)keychainAccount;
- (struct __SecKey { }*)privateKey;
- (struct __SecKey { }*)pubkey;
- (struct __SecKey { }*)publicKey;
- (bool)reload;
- (id)serialize;
- (void)setInitialized:(bool)arg1;
- (void)setKeychainAccount:(id)arg1;
- (id)signMessageECDSA_DER:(id)arg1;

@end
