
@interface WFSSHKeyPair : NSObject <NSSecureCoding> {
    NSString * _comment;
    Class  _format;
    NSNumber * _keySize;
    NSData * _privateKeyData;
    NSData * _publicKeyData;
}

@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, retain) Class format;
@property (nonatomic, readonly) NSNumber *keySize;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedType;
@property (nonatomic, readonly) NSData *privateKeyData;
@property (nonatomic, readonly) NSData *publicKeyData;

+ (id)defaultKeyComment;
+ (id)keyFormats;
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3;
+ (id)knownHostFileURL;
+ (bool)parsePublicKey:(id)arg1 type:(id*)arg2 data:(id*)arg3 comment:(id*)arg4;
+ (void)setSharedKeyPair:(id)arg1;
+ (id)sharedKeyPair;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)comment;
- (void)encodeWithCoder:(id)arg1;
- (Class)format;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(Class)arg1 privateKeyData:(id)arg2 publicKeyData:(id)arg3 keySize:(id)arg4 comment:(id)arg5;
- (id)keySize;
- (id)localizedDescription;
- (id)localizedType;
- (id)privateKeyData;
- (id)privateKeyPEM;
- (id)publicKey;
- (id)publicKeyData;
- (id)publicKeyFingerprintWithType:(unsigned long long)arg1;
- (void)setFormat:(Class)arg1;

@end
