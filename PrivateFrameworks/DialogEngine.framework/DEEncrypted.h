
@interface DEEncrypted : NSObject

+ (id)decrypt:(id)arg1;
+ (id)decrypt:(id)arg1 allowAllKeys:(bool)arg2 keyVersion:(id*)arg3;
+ (id)decrypt:(id)arg1 keyVersion:(id*)arg2;
+ (id)decryptAll:(id)arg1;
+ (bool)decryptAllFrom:(id)arg1 to:(id)arg2;
+ (id)decryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3;
+ (bool)decryptFrom:(id)arg1 to:(id)arg2 allowAllKeys:(bool)arg3 keyVersion:(id*)arg4;
+ (bool)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3;
+ (bool)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 allowAllKeys:(bool)arg4;
+ (id)encrypt:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3 multipart:(bool)arg4;
+ (id)encryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 keyId:(unsigned long long)arg4 privateKey:(id)arg5 multipart:(bool)arg6;
+ (bool)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 encryptedPb:(void*)arg5;
+ (bool)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 multipart:(bool)arg5;
+ (id)getKey:(unsigned long long)arg1;
+ (id)getKeyWithVersion:(id)arg1;
+ (id)getKeyWithVersion:(id)arg1 symmetric:(bool*)arg2;
+ (id)getSymmetricKey:(id)arg1 publicKey:(id)arg2 symmetricKeyIV:(id*)arg3 signature:(id*)arg4;
+ (id)getSymmetricKey:(id)arg1 symmetricKeyIV:(id)arg2 signature:(id)arg3;
+ (id)getSymmetricSrc:(id)arg1 publicKey:(id)arg2;
+ (bool)isPrivateKey:(id)arg1 publicKey:(id)arg2;
+ (bool)isSymmetric:(unsigned long long)arg1;
+ (id)toEnvelope:(bool)arg1 iv:(id)arg2 hmac:(id)arg3 keyVersion:(id)arg4 payload:(id)arg5;
+ (id)versionFile:(id)arg1;
+ (bool)wrapFrom:(id)arg1 to:(id)arg2 encryptedPb:(void*)arg3 multipart:(bool)arg4;

@end
