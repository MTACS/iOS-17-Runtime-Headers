
@interface _SFKeychainManager : NSObject {
    NSObject<OS_dispatch_queue> * _keychainManagerQueue;
    NSObject<OS_dispatch_queue> * _keychainReplyQueue;
}

@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue;
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue;

+ (id)defaultManager;
+ (id)defaultOverCommitManager;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2;
- (struct __CFDictionary { }*)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary { }*)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary { }*)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)findPrivateKeyWithIdentifier:(id)arg1 certificate:(id*)arg2 attributes:(struct __CFDictionary {}**)arg3 result:(int*)arg4;
- (id)foundPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 certificate:(id)arg2;
- (int)generateAttributesForIdentityAndAddToKeychain:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3;
- (void)identitiesFilteredBy:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)identityForIdentifier:(id)arg1;
- (void)identityForIdentifier:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)initManager;
- (id)initOverCommitManager;
- (void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)keychainManagerQueue;
- (id)keychainReplyQueue;
- (void)keysFilteredBy:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)publicKeyLookupWithIdentifier:(id)arg1 certificate:(id)arg2 result:(int)arg3;
- (void)removeItemWithIdentifier:(id)arg1 resultHandler:(id /* block */)arg2;
- (bool)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 error:(id*)arg4;
- (void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)setKeychainManagerQueue:(id)arg1;
- (void)setKeychainReplyQueue:(id)arg1;

@end
