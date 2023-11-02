
@interface GTRemoteDeviceBrowserXPCProxy : NSObject <GTRemoteDeviceBrowser> {
    GTServiceConnection * _connection;
    NSSet * _ignoreMethods;
    NSMutableDictionary * _observerIdToPort;
}

- (void).cxx_destruct;
- (id)allDevices;
- (void)deregisterObserver:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (unsigned long long)registerObserver:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
