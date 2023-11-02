
@interface RemoteDeviceManager : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

- (void)dealloc;
- (void)disconnectDevice:(id)arg1;
- (id)init;
- (void)sendMessage:(const char *)arg1 args:(id)arg2;

@end
