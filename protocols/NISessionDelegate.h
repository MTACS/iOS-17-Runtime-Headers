
@protocol NISessionDelegate <NSObject>

@optional

- (void)session:(NISession *)arg1 didGenerateShareableConfigurationData:(NSData *)arg2 forObject:(NINearbyObject *)arg3;
- (void)session:(NISession *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)session:(NISession *)arg1 didRemoveNearbyObjects:(NSArray *)arg2 withReason:(long long)arg3;
- (void)session:(NISession *)arg1 didUpdateAlgorithmConvergence:(NIAlgorithmConvergence *)arg2 forObject:(NINearbyObject *)arg3;
- (void)session:(NISession *)arg1 didUpdateNearbyObjects:(NSArray *)arg2;
- (void)sessionDidStartRunning:(NISession *)arg1;
- (void)sessionSuspensionEnded:(NISession *)arg1;
- (void)sessionWasSuspended:(NISession *)arg1;

@end
