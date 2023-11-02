
@protocol TPKeyPair <NSObject>

@required

- (<TPPublicKey> *)publicKey;
- (NSData *)signatureForData:(NSData *)arg1 withError:(id*)arg2;

@end
