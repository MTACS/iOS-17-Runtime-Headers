
@protocol CDPDSecureBackupProxy <NSObject>

@required

- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)cacheRecoveryKey:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (CDPContext *)cdpContext;
- (bool)disableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)enableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (id)initWithContext:(CDPContext *)arg1;
- (bool)isRecoveryKeySet:(id*)arg1;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)removeRecoveryKeyFromSOS:(id*)arg1;
- (void)setCdpContext:(CDPContext *)arg1;
- (bool)setRecoveryKeyInSOS:(NSString *)arg1 error:(id*)arg2;
- (void)uncacheAllSecrets;
- (bool)verifyRecoveryKey:(NSString *)arg1 error:(id*)arg2;

@end
