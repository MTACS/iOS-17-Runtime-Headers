
@protocol NSFileAccessClientLocalArbiterInterface <NSFileAccessArbiter>

@required

- (NSObject<OS_dispatch_semaphore> *)grantAccessClaim:(NSFileAccessClaim *)arg1 synchronouslyIfPossible:(bool)arg2;
- (void)grantSubarbitrationClaim:(NSFileSubarbitrationClaim *)arg1 withServer:(NSXPCListener *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didMoveItemAtURL:(NSURLPromisePair *)arg2 toURL:(NSURLPromisePair *)arg3;

@end
