
@protocol SPAKE2Protocol

@required

- (NSData *)decryptMessage:(NSData *)arg1 error:(id*)arg2;
- (NSData *)encryptMessage:(NSData *)arg1 error:(id*)arg2;
- (_SFAESKey *)getKey;
- (NSData *)getMsg1WithError:(id*)arg1;
- (NSData *)getMsg2WithError:(id*)arg1;
- (bool)isVerified;
- (bool)processMsg1:(NSData *)arg1 error:(id*)arg2;
- (bool)processMsg2:(NSData *)arg1 error:(id*)arg2;

@end
