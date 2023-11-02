
@protocol HAPEncryptedSession <NSObject>

@required

- (NSData *)decryptData:(NSData *)arg1 additionalAuthenticatedData:(NSData *)arg2 error:(id*)arg3;
- (NSData *)encryptData:(NSData *)arg1 additionalAuthenticatedData:(NSData *)arg2 error:(id*)arg3;

@end
