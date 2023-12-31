
@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } * _dynamicStore;
    struct __CFRunLoopSource { } * _dynamicStoreSource;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)ethernetDynamicStoreDidChange;
- (id)ethernetNetworkInterfaces;
- (bool)hasEthernetNetworkInterfaces;
- (id)init;
- (bool)isHiddenEthernetInterface:(struct __SCNetworkInterface { }*)arg1;
- (void)registerForEthernetAdapterNotifications;

@end
