
@protocol P256PrivateKeyProtocol <NSObject>

@required

+ (id)generate;

- (id)initWithData:(NSData *)arg1 error:(id*)arg2;
- (NSData *)keyAgreement:(id <P256PublicKeyProtocol>)arg1 error:(id*)arg2;
- (NSData *)keychainData;
- (<P256PublicKeyProtocol> *)publicKey;
- (NSData *)signData:(NSData *)arg1 error:(id*)arg2;

@end
