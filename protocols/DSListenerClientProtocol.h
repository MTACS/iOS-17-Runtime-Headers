
@protocol DSListenerClientProtocol <NSObject>

@required

- (void)failedToStartListenerWithError:(NSError *)arg1;
- (void)receivedData:(NSData *)arg1 fromProvider:(DSProviderDevice *)arg2;
- (void)startedListener;
- (void)stoppedListener;
- (void)updateProviders:(NSArray *)arg1;

@end
