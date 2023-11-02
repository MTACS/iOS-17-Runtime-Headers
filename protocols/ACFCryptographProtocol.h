
@protocol ACFCryptographProtocol <NSObject>

@required

- (void)clearKey:(NSMutableData *)arg1;
- (NSData *)compactDataFromPropertyList:(id)arg1;
- (NSData *)compressData:(NSData *)arg1;
- (NSData *)decodeBase16:(NSString *)arg1;
- (NSData *)decodeBase64:(NSString *)arg1;
- (NSString *)decodeStringWithObscuredData:(NSData *)arg1;
- (NSData *)decrypt3DESCBCData:(NSData *)arg1 withKey:(NSData *)arg2;
- (NSData *)decryptAES128CBCData:(NSData *)arg1 withKey:(NSData *)arg2 initializationVector:(NSData *)arg3 pading:(bool)arg4;
- (NSString *)encodeBase16:(NSData *)arg1;
- (NSString *)encodeBase64:(NSData *)arg1;
- (NSData *)encodeObscuredDataWithString:(NSString *)arg1 length:(unsigned long long)arg2;
- (NSData *)encrypt3DESCBCData:(NSData *)arg1 withKey:(NSData *)arg2 pading:(bool)arg3;
- (NSData *)encryptAES128CBCData:(NSData *)arg1 withKey:(NSData *)arg2 initializationVector:(NSData *)arg3 pading:(bool)arg4;
- (NSData *)encryptData:(NSData *)arg1 withKey:(struct __SecKey { }*)arg2;
- (void)fillEncryptionSuffix:(NSMutableData *)arg1;
- (void)fillHMACSuffix:(NSMutableData *)arg1;
- (NSData *)hashDataSHA1WithString:(NSData *)arg1;
- (NSData *)hashDataSHA256WithData:(NSData *)arg1;
- (NSString *)hashStringSHA1WithString:(NSString *)arg1;
- (NSString *)hashStringSHA256WithString:(NSString *)arg1;
- (NSData *)hmac256DataWithData:(NSData *)arg1 key:(NSData *)arg2;
- (NSData *)randomDataOfLength:(unsigned long long)arg1;
- (NSString *)randomStringOfLength:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1 toData:(NSMutableData *)arg2;
- (NSData *)sha1Context;
- (void)sha1Context:(NSData *)arg1 updateWithData:(NSData *)arg2;
- (NSData *)sha1ContextFinalize:(NSData *)arg1;
- (NSData *)signatureForData:(NSData *)arg1 withKey:(struct __SecKey { }*)arg2;

@end
