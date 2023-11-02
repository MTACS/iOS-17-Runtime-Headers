
@interface TKLocalSEPSystemKey : TKLocalSEPKey {
    unsigned int  _AKSSystemKeyGeneration;
    unsigned int  _AKSSystemKeyType;
}

+ (bool)hasSystemKey:(unsigned int)arg1 ACMHandle:(id)arg2;
+ (void)initSystemKeyIDs;

- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 isIDUnknown:(bool*)arg4 error:(id*)arg5;
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3;
- (id)description;
- (long long)keySize;
- (id)keyType;
- (bool)lifetimeControlWithType:(long long)arg1 error:(id*)arg2;
- (id)objectID;
- (id)publicKeyWithError:(id*)arg1;
- (id)signDigest:(id)arg1 error:(id*)arg2;
- (bool)systemKey;
- (bool)systemSessionKey;

@end
