
@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol> {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _publicKeyRef;
    NSData * _serializedKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*publicKeyRef;
@property (retain) NSData *serializedKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithSecKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)publicKeyRef;
- (id)serializedKey;
- (void)setPublicKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setSerializedKey:(id)arg1;
- (bool)verifySignature:(id)arg1 data:(id)arg2;

@end
