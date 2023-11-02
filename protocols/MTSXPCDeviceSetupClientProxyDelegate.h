
@protocol MTSXPCDeviceSetupClientProxyDelegate <NSObject>

@required

- (void)clientProxy:(void *)arg1 performDeviceSetupUsingRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MTSXPCClientProxy *, MTSDeviceSetupRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
