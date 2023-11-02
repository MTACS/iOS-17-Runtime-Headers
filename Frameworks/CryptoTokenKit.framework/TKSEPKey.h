
@interface TKSEPKey : NSObject {
    LAContext * _authContext;
}

@property (nonatomic, readonly) struct __SecAccessControl { }*accessControl;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) LAContext *authContext;
@property (nonatomic, readonly) long long keySize;
@property (nonatomic, readonly) id keyType;
@property (nonatomic, readonly) id objectID;
@property (nonatomic, readonly) bool systemKey;
@property (nonatomic, readonly) bool systemSessionKey;

+ (id)_testing_callerEntitlements;
+ (id)_testing_keybagHandle;
+ (bool)canUseSEPLocally;
+ (id)clientToken;
+ (bool)hasSEP;
+ (bool)isDaytona;
+ (bool)isGibraltar;
+ (void)setClientToken:(id)arg1;
+ (void)setContextErrorHandler:(id /* block */)arg1;
+ (void)set_testing_callerEntitlements:(id)arg1;
+ (void)set_testing_keybagHandle:(id)arg1;
+ (void)setupKeybagForTesting:(bool)arg1;

- (void).cxx_destruct;
- (id)_initWithAuthContext:(id)arg1;
- (struct __SecAccessControl { }*)accessControl;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (id)attributes;
- (id)authContext;
- (id)computeSharedSecret:(id)arg1 error:(id*)arg2;
- (bool)deleteWithError:(id*)arg1;
- (id)initLocalWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl { }*)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 forceSystemSession:(bool)arg7 error:(id*)arg8;
- (id)initLocalWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 forceSystemSession:(bool)arg4 error:(id*)arg5;
- (id)initWithAttributes:(id)arg1 authContext:(id)arg2 forceSystemSession:(bool)arg3 error:(id*)arg4;
- (id)initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl { }*)arg3 options:(id)arg4 authContext:(id)arg5 forceSystemSession:(bool)arg6 error:(id*)arg7;
- (id)initWithObjectID:(id)arg1 authContext:(id)arg2 forceSystemSession:(bool)arg3 error:(id*)arg4;
- (long long)keySize;
- (id)keyType;
- (bool)lifetimeControlWithType:(long long)arg1 error:(id*)arg2;
- (id)objectID;
- (id)publicKeyWithError:(id*)arg1;
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id*)arg3;
- (void)setAuthContext:(id)arg1;
- (id)signDigest:(id)arg1 error:(id*)arg2;
- (bool)systemKey;
- (bool)systemSessionKey;

@end
