
@protocol RMConnectionStreamConsumingDelegate <RMConnectionDataDelegate>

@required

- (void)endpoint:(RMConnectionEndpoint *)arg1 didReceiveStreamedData:(NSData *)arg2;

@end
