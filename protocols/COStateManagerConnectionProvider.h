
@protocol COStateManagerConnectionProvider <NSObject>

@required

- (NSXPCConnection *)stateManagerServiceConnection;

@end
