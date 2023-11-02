
@protocol AFBridgeConnectionListenerDelegate <NSObject>

@required

- (void)connectionInterrupted;
- (void)connectionInvalidated;

@end
