
@protocol CloudTabStoreDelegate <NSObject>

@required

- (void)cloudTabStore:(CloudTabStore *)arg1 cloudTabsEnabledDidChange:(bool)arg2;
- (void)cloudTabStore:(CloudTabStore *)arg1 didReceiveTabCloseRequest:(WBSCloudTabCloseRequest *)arg2;
- (void)cloudTabStore:(CloudTabStore *)arg1 didUpdateDevicesFromCloudKitWithError:(NSError *)arg2;
- (void)cloudTabStoreDidGetCachedDevicesFromCloudKit:(CloudTabStore *)arg1;
- (void)saveCloudTabsUsingCloudTabStore:(CloudTabStore *)arg1;

@end
