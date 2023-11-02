
@protocol WBSCloudTabDeviceProvider <NSObject>

@required

- (void)addCloudTabsObserver:(id <WBSCloudTabDeviceObserving>)arg1;
- (bool)closeTab:(id <WBSCloudTabItem>)arg1 onDevice:(id <WBSCloudTabProvider>)arg2;
- (bool)cloudTabsAreEnabled;
- (NSArray *)syncedRemoteCloudTabDevicesForProfileWithIdentifier:(NSString *)arg1;

@end
