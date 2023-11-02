
@interface _LAKeyStoreKey : NSObject <LAKeyStoreKey> {
    NSData * _acl;
    NSString * _identifier;
    id  _keyRef;
    id  _pubKeyRef;
    NSData * _publicKeyHash;
}

@property (nonatomic, readonly) NSData *acl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *publicKeyHash;
@property (readonly) Class superclass;

+ (id)buildWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)acl;
- (bool)canDecryptUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canEncryptUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canSignUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canVerifyUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (void)decryptData:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)encryptData:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 completion:(id /* block */)arg3;
- (void)exchangeKeysWithPublicKey:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 secKeyParameters:(id)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (void)exportBytesWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)publicKeyHash;
- (void)signData:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)verifyData:(id)arg1 signature:(id)arg2 secKeyAlgorithm:(struct __CFString { }*)arg3 completion:(id /* block */)arg4;

@end
