
@protocol BSServiceConnectionListenerDelegate <NSObject>

@required

- (void)listener:(BSServiceConnectionListener *)arg1 didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg2 withContext:(id <BSXPCDecoding>)arg3;

@end
