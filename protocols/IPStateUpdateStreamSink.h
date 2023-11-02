
@protocol IPStateUpdateStreamSink <NSObject>

@required

- (void)resume;
- (void)sendUpdateMessage:(IPStateUpdateMessage *)arg1;

@end
