
@interface SecCTKKey : NSObject <NSCopying> {
    NSDictionary * _keychainAttributes;
    NSDictionary * _sessionParameters;
    TKClientTokenObject * _tokenObject;
}

@property (nonatomic, readonly) long long algorithmID;
@property (nonatomic, readonly) NSDictionary *keychainAttributes;
@property (nonatomic, retain) NSDictionary *sessionParameters;
@property (nonatomic, retain) TKClientTokenObject *tokenObject;

+ (id)fromKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;

- (void).cxx_destruct;
- (long long)algorithmID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initFromKey:(id)arg1;
- (id)initWithAttributes:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)keychainAttributes;
- (id)performOperation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id*)arg5;
- (id)sessionParameters;
- (void)setSessionParameters:(id)arg1;
- (void)setTokenObject:(id)arg1;
- (id)tokenObject;

@end
