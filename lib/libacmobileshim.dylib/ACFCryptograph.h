
@interface ACFCryptograph : NSObject <ACFCryptographProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clearKey:(id)arg1;
- (id)compactDataFromPropertyList:(id)arg1;
- (id)compressData:(id)arg1;
- (id)decodeBase16:(id)arg1;
- (id)decodeBase64:(id)arg1;
- (id)decodeStringWithObscuredData:(id)arg1;
- (id)decrypt3DESCBCData:(id)arg1 withKey:(id)arg2;
- (id)decryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(bool)arg4;
- (id)encodeBase16:(id)arg1;
- (id)encodeBase64:(id)arg1;
- (id)encodeObscuredDataWithString:(id)arg1 length:(unsigned long long)arg2;
- (id)encrypt3DESCBCData:(id)arg1 withKey:(id)arg2 pading:(bool)arg3;
- (id)encryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(bool)arg4;
- (id)encryptData:(id)arg1 withKey:(struct __SecKey { }*)arg2;
- (void)fillEncryptionSuffix:(id)arg1;
- (void)fillHMACSuffix:(id)arg1;
- (id)hashDataSHA1WithString:(id)arg1;
- (id)hashDataSHA256WithData:(id)arg1;
- (id)hashStringSHA1WithString:(id)arg1;
- (id)hashStringSHA256WithString:(id)arg1;
- (id)hmac256DataWithData:(id)arg1 key:(id)arg2;
- (id)randomDataOfLength:(unsigned long long)arg1;
- (id)randomStringOfLength:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1 toData:(id)arg2;
- (id)sha1Context;
- (void)sha1Context:(id)arg1 updateWithData:(id)arg2;
- (id)sha1ContextFinalize:(id)arg1;
- (id)signatureForData:(id)arg1 withKey:(struct __SecKey { }*)arg2;

@end
