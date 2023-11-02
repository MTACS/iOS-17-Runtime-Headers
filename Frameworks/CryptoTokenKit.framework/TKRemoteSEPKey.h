
@interface TKRemoteSEPKey : TKSEPKey {
    id  _accessControl;
    bool  _forceSystemSession;
    id  _keyID;
    long long  _keySize;
    id  _keyType;
    NSData * _publicKey;
    bool  _systemKey;
}

@property (nonatomic, readonly) id keyID;

- (void).cxx_destruct;
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl { }*)arg3 options:(id)arg4 authContext:(id)arg5 forceSystemSession:(bool)arg6 error:(id*)arg7;
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 forceSystemSession:(bool)arg3 error:(id*)arg4;
- (struct __SecAccessControl { }*)accessControl;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (id)computeSharedSecret:(id)arg1 error:(id*)arg2;
- (bool)deleteWithError:(id*)arg1;
- (id)keyID;
- (long long)keySize;
- (id)keyType;
- (bool)lifetimeControlWithType:(long long)arg1 error:(id*)arg2;
- (id)objectID;
- (bool)processServerAtributes:(id)arg1 error:(id*)arg2;
- (id)publicKeyWithError:(id*)arg1;
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id*)arg3;
- (id)signDigest:(id)arg1 error:(id*)arg2;
- (bool)systemKey;
- (bool)systemSessionKey;
- (id)withError:(id*)arg1 invoke:(id /* block */)arg2;

@end
