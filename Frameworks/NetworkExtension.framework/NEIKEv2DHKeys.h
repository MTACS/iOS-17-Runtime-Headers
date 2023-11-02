
@interface NEIKEv2DHKeys : NSObject {
    struct OpaqueSecDHContext { } * _context;
    unsigned long long  _group;
    NSData * _prime;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _privateKeyRef;
    NSData * _publicKey;
    unsigned long long  _publicKeySize;
    int  _type;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
