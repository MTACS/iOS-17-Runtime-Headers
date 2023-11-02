
@protocol IPServerXPCTransportDelegate <NSObject>

@required

- (void)transport:(IPServerXPCTransport *)arg1 acceptedClient:(IPXPCClient *)arg2;
- (void)transport:(IPServerXPCTransport *)arg1 clientDisconnected:(IPXPCClient *)arg2;
- (<IPXPCClientDelegate> *)transport:(IPServerXPCTransport *)arg1 requestDelegateForClient:(IPXPCClient *)arg2;
- (bool)transport:(IPServerXPCTransport *)arg1 shouldAcceptConnection:(NSXPCConnection *)arg2;

@end
