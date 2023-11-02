
@protocol HPSServiceConnectionProvider <NSObject>

@required

- (NSXPCConnection *)serviceConnection;

@end
