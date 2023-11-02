
@protocol _LAKeyStoreGenericPasswordCryptor <NSObject>

@required

- (void)decryptData:(void *)arg1 publicKeyHash:(void *)arg2 context:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSData *, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)encryptData:(void *)arg1 publicKeyHash:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
