
@protocol HDXPCListenerClientProvider <NSObject>

@required

- (HDXPCClient *)clientForListener:(HDXPCListener *)arg1 connection:(NSXPCConnection *)arg2 error:(id*)arg3;

@end
