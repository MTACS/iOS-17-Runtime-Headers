
@interface LAKeyStoreSecretCoder : NSObject

- (id)_generateNonce;
- (bool)_isCoderAvailable;
- (void)unwrapData:(id)arg1 completion:(id /* block */)arg2;
- (void)wrapData:(id)arg1 completion:(id /* block */)arg2;

@end
