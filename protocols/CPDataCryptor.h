
@protocol CPDataCryptor <NSObject, NSSecureCoding>

@required

- (NSData *)decryptData:(NSData *)arg1 keyID:(NSUUID *)arg2 seqNum:(unsigned long long)arg3 error:(id*)arg4;
- (NSArray *)decryptionKeyIDSet;
- (NSData *)encryptData:(NSData *)arg1 seqNum:(unsigned long long)arg2 error:(id*)arg3;
- (NSUUID *)encryptionKeyID;

@end
