
@protocol WBSCloudTabStoreDelegate <NSObject>

@optional

- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(WBSCloudTabStore *)arg1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(WBSCloudTabStore *)arg1 error:(NSError *)arg2;

@end
