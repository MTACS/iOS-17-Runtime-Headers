
@protocol IPAccessAdjudicator <NSObject>

@required

- (bool)progressServer:(IPProgressServer *)arg1 shouldAcceptConnection:(NSXPCConnection *)arg2;

@end
