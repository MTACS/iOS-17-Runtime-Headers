
@protocol WBSCloudTabDeviceObserving <NSObject>

@optional

- (void)cloudTabDeviceProvider:(id <WBSCloudTabDeviceProvider>)arg1 didUpdateCloudTabsInProfileWithIdentifier:(NSString *)arg2;

@end
