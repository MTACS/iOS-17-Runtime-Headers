
@protocol TPPublicKey <NSObject>

@required

- (bool)checkSignature:(NSData *)arg1 matchesData:(NSData *)arg2;
- (NSData *)spki;

@end
