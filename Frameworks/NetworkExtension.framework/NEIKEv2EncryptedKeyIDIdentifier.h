
@interface NEIKEv2EncryptedKeyIDIdentifier : NEIKEv2KeyIDIdentifier {
    NSData * _aad;
    NSData * _keyData;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _keyRef;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)decryptWithSession:(id)arg1 returnError:(id*)arg2;
- (unsigned long long)hash;
- (id)initWithKeyID:(id)arg1 aad:(id)arg2 key:(id)arg3;
- (id)initWithKeyID:(id)arg1 aad:(id)arg2 keyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
- (id)initWithKeyIDString:(id)arg1 aad:(id)arg2 key:(id)arg3;
- (id)initWithKeyIDString:(id)arg1 aad:(id)arg2 keyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
- (bool)isEqual:(id)arg1;

@end
