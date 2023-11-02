
@interface TKLocalSEPRefKey : TKLocalSEPKey {
    struct aks_ref_key_s { } * _AKSRefKey;
    unsigned long long  _debugID;
}

@property (nonatomic, readonly) struct aks_ref_key_s { }*AKSRefKey;

- (struct aks_ref_key_s { }*)AKSRefKey;
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl { }*)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 forceSystemSession:(bool)arg7 error:(id*)arg8;
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 forceSystemSession:(bool)arg4 error:(id*)arg5;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (id)computeSharedSecret:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)deleteWithError:(id*)arg1;
- (id)description;
- (long long)keySize;
- (id)keyType;
- (id)objectID;
- (id)publicKeyWithError:(id*)arg1;
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id*)arg3;
- (id)signDigest:(id)arg1 error:(id*)arg2;
- (bool)systemSessionKey;

@end
