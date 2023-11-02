
@interface NSPPrivateAccessTokenClientState : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _clientKey;
    NSData * _clientSecret;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
