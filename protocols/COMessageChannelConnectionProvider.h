
@protocol COMessageChannelConnectionProvider <NSObject>

@required

- (NSXPCConnection *)messageChannelServiceConnection;

@end
