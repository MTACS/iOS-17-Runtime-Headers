
@protocol ACDClientProviderProtocol <NSObject>

@required

- (ACDClient *)createClientForConnection:(NSXPCConnection *)arg1;

@end
