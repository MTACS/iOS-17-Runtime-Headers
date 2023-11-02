
@protocol IPStateUpdateStreamSourceDelegate <NSObject>

@required

- (void)stateUpdateStreamSource:(id <IPStateUpdateStreamSource>)arg1 updateMessageReceived:(IPStateUpdateMessage *)arg2;

@end
