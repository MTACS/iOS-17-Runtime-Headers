
@protocol NSXPCListenerDelegate <NSObject>

@optional

- (bool)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;

@end
