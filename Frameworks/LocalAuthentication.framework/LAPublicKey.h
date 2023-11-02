
@interface LAPublicKey : NSObject {
    unsigned long long  _instanceID;
    <LAKeyStoreKey> * _key;
    LARight * _right;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (bool)canEncryptUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canVerifyUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encryptData:(id)arg1 secKeyAlgorithm:(struct __CFString { }*)arg2 completion:(id /* block */)arg3;
- (void)exportBytesWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)initWithKey:(id)arg1;
- (id)right;
- (void)setRight:(id)arg1;
- (void)verifyData:(id)arg1 signature:(id)arg2 secKeyAlgorithm:(struct __CFString { }*)arg3 completion:(id /* block */)arg4;

@end
