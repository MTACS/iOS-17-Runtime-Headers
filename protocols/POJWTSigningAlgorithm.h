
@protocol POJWTSigningAlgorithm <NSObject>

@required

- (NSData *)signData:(NSData *)arg1 usingKey:(struct __SecKey { }*)arg2;
- (bool)verifySignature:(NSData *)arg1 onData:(NSData *)arg2 usingCertificateString:(NSString *)arg3;
- (bool)verifySignature:(NSData *)arg1 onData:(NSData *)arg2 usingKey:(struct __SecKey { }*)arg3;

@end
