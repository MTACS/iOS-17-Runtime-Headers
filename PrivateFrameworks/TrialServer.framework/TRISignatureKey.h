
@interface TRISignatureKey : NSObject {
    struct __SecKey { } * _key;
}

+ (struct __SecKey { }*)_keyFromCertificateChain:(id)arg1;
+ (id)keyFromData:(id)arg1;

- (bool)_validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString { }*)arg3;
- (bool)_validateSignature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString { }*)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithKey:(struct __SecKey { }*)arg1;
- (bool)validateBase64Signature:(id)arg1 data:(id)arg2;
- (bool)validateBase64Signature:(id)arg1 forFile:(id)arg2;

@end
