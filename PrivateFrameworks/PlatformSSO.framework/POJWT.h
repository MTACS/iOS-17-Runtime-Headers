
@interface POJWT : NSObject {
    POJWTHeader * _decodedHeader;
    NSString * _rawAuthenticationTag;
    NSString * _rawBody;
    NSString * _rawCipherText;
    NSString * _rawEncryptedKey;
    NSString * _rawHeader;
    NSString * _rawIV;
    NSString * _rawSignature;
}

@property (retain) POJWTHeader *decodedHeader;
@property (getter=isJWE, readonly) bool jwe;
@property (retain) NSString *rawAuthenticationTag;
@property (retain) NSString *rawBody;
@property (retain) NSString *rawCipherText;
@property (retain) NSString *rawEncryptedKey;
@property (retain) NSString *rawHeader;
@property (retain) NSString *rawIV;
@property (retain) NSString *rawSignature;
@property (retain) NSData *signedData;

- (void).cxx_destruct;
- (bool)decodeAndDecryptUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (bool)decodeAndDecryptUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 apvString:(id)arg2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)decodeEphemeralPublicKey;
- (id)decodedHeader;
- (id)initWithString:(id)arg1;
- (bool)isJWE;
- (id)mutableCopy;
- (id)rawAuthenticationTag;
- (id)rawBody;
- (id)rawCipherText;
- (id)rawEncryptedKey;
- (id)rawHeader;
- (id)rawIV;
- (id)rawSignature;
- (void)setDecodedHeader:(id)arg1;
- (void)setRawAuthenticationTag:(id)arg1;
- (void)setRawBody:(id)arg1;
- (void)setRawCipherText:(id)arg1;
- (void)setRawEncryptedKey:(id)arg1;
- (void)setRawHeader:(id)arg1;
- (void)setRawIV:(id)arg1;
- (void)setRawSignature:(id)arg1;
- (id)stringRepresentation;
- (bool)verifySignatureUsingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;

@end
