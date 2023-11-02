
@interface DICreateParams : DIBaseParams {
    NSString * _certificate;
    unsigned long long  _encryptionMethod;
    unsigned long long  _numBlocks;
    bool  _passphrase;
    NSString * _publicKey;
    NSString * _systemKeychainAccount;
}

@property (nonatomic, copy) NSString *certificate;
@property (nonatomic) unsigned long long encryptionMethod;
@property (nonatomic) unsigned long long numBlocks;
@property (nonatomic) bool passphrase;
@property (nonatomic, copy) NSString *publicKey;
@property (nonatomic, copy) NSString *systemKeychainAccount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificate;
- (bool)checkExistingFileWithIsDirectory:(bool)arg1 error:(id*)arg2;
- (bool)createDiskImageParamsWithError:(id*)arg1;
- (void)createDiskImageParamsXPC;
- (bool)createEncryptionWithXPCHandler:(id)arg1 error:(id*)arg2;
- (bool)createWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)encryptionMethod;
- (bool)eraseIfExistingWithError:(id*)arg1;
- (bool)getCertificateWithEncryptionCreator:(id)arg1 outCertificate:(id*)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 numBlocks:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)numBlocks;
- (bool)onErrorCleanup;
- (bool)passphrase;
- (id)publicKey;
- (bool)resizeWithNumBlocks:(unsigned long long)arg1 error:(id*)arg2;
- (void)setCertificate:(id)arg1;
- (void)setEncryptionMethod:(unsigned long long)arg1;
- (void)setNumBlocks:(unsigned long long)arg1;
- (void)setPassphrase:(bool)arg1;
- (bool)setPassphrase:(const char *)arg1 error:(id*)arg2;
- (void)setPublicKey:(id)arg1;
- (void)setSystemKeychainAccount:(id)arg1;
- (id)systemKeychainAccount;
- (bool)tryCreateUsingKeychainCertificateWithError:(id*)arg1;

@end
