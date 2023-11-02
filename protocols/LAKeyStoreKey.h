
@protocol LAKeyStoreKey <NSObject>

@required

- (NSData *)acl;
- (bool)canDecryptUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canEncryptUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canSignUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (bool)canVerifyUsingSecKeyAlgorithm:(struct __CFString { }*)arg1;
- (void)decryptData:(void *)arg1 secKeyAlgorithm:(void *)arg2 context:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSData *, struct __CFString { }*, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)encryptData:(void *)arg1 secKeyAlgorithm:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, struct __CFString { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)exchangeKeysWithPublicKey:(void *)arg1 secKeyAlgorithm:(void *)arg2 secKeyParameters:(void *)arg3 context:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSData *, struct __CFString { }*, NSDictionary *, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)exportBytesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSString *)identifier;
- (NSData *)publicKeyHash;
- (void)signData:(void *)arg1 secKeyAlgorithm:(void *)arg2 context:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSData *, struct __CFString { }*, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)verifyData:(void *)arg1 signature:(void *)arg2 secKeyAlgorithm:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSData *, struct __CFString { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
