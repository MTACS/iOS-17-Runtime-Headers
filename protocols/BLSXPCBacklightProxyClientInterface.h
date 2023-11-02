
@protocol BLSXPCBacklightProxyClientInterface <NSObject>

@required

- (oneway void)didChangeAlwaysOnEnabled:(NSNumber *)arg1;
- (oneway void)didCompleteUpdateToState:(NSNumber *)arg1 forEvents:(NSArray<__BLSBacklightChangeEvent__> *)arg2 abortedEvents:(NSArray<__BLSBacklightChangeEvent__> *)arg3;
- (oneway void)performingEvent:(BLSBacklightChangeEvent *)arg1;

@end
