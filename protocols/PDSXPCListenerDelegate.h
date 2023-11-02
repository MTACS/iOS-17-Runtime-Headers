
@protocol PDSXPCListenerDelegate <NSObject>

@optional

- (bool)listener:(id <PDSXPCListener>)arg1 shouldAcceptNewConnection:(id <PDSXPCDaemonConnection>)arg2;

@end
