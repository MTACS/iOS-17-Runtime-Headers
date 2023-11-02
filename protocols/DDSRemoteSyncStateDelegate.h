
@protocol DDSRemoteSyncStateDelegate <NSObject>

@required

- (void)remoteSyncStateRequestsResetForAssetType:(NSString *)arg1;
- (void)remoteSyncStateRequestsRetryForAssetType:(NSString *)arg1;
- (void)remoteSyncStateRequestsUpdateForAssetType:(NSString *)arg1;

@end
