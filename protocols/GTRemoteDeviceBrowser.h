
@protocol GTRemoteDeviceBrowser

@required

- (NSArray *)allDevices;
- (void)deregisterObserver:(unsigned long long)arg1;
- (unsigned long long)registerObserver:(id <GTRemoteDeviceBrowserObserver>)arg1;

@end
