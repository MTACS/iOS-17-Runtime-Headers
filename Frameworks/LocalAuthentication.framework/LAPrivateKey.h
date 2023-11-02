
@interface LAPrivateKey : NSObject {
    unsigned long long  _instanceID;
    <LAKeyStoreKey> * _key;
    LARight * _right;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) LAPublicKey *publicKey;

- (void).cxx_destruct;
- (bool)canDecryptUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canSignUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (void)dealloc;
- (void)decryptData:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 completion:(id /* block */)arg3;
- (id)description;
- (void)exchangeKeysWithPublicKey:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 secKeyParameters:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithKey:(id)arg1;
- (id)publicKey;
- (id)right;
- (void)setRight:(id)arg1;
- (void)signData:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 completion:(id /* block */)arg3;

@end
