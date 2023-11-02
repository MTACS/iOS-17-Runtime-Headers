
@protocol MTSXPCListenerDelegate <NSObject>

@required

- (bool)listener:(id <MTSXPCListener>)arg1 shouldAcceptNewConnection:(id <MTSXPCConnection>)arg2;

@end
