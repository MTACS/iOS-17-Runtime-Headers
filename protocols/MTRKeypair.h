
@protocol MTRKeypair <NSObject>

@required

- (struct __SecKey { }*)publicKey;

@optional

- (NSData *)signMessageECDSA_DER:(NSData *)arg1;
- (NSData *)signMessageECDSA_RAW:(NSData *)arg1;

@end
