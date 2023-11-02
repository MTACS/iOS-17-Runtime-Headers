
@interface DESSignatureKey : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _key;
}

+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)keyFromCertificateChain:(id)arg1;
+ (id)keyFromData:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (bool)validateBase64Signature:(id)arg1 data:(id)arg2;
- (bool)validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString { }*)arg3;
- (bool)validateSignature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString { }*)arg3;

@end
