
@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol> {
    id  _privateKey;
    NSData * _privateKeyBlob;
    SecKeyP256Public * _publicKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id privateKey;
@property (nonatomic, readonly) NSData *privateKeyBlob;
@property (nonatomic, retain) SecKeyP256Public *publicKey;
@property (readonly) Class superclass;

+ (id)defaultProtectionClassForPlatform;
+ (id)generate;
+ (id)generateWithAccessControl:(id)arg1;

- (void).cxx_destruct;
- (id)getPrivateKeyRefWithError:(id*)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)keyAgreement:(id)arg1 error:(id*)arg2;
- (id)keyAgreement:(id)arg1 error:(id*)arg2 isRetry:(bool)arg3;
- (id)keychainData;
- (id)privateKey;
- (id)privateKeyBlob;
- (id)publicKey;
- (void)setPublicKey:(id)arg1;
- (id)signData:(id)arg1 error:(id*)arg2;

@end
