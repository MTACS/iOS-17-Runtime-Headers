
@protocol HMDSyncOperationManagerDataSource

@required

- (void)forceCloudFetch;
- (bool)isCloudAccountActive;
- (bool)isNetworkConnectionAvailable;
- (bool)legacyZoneHasRecordsAvailable;
- (bool)zoneFetchFailed;

@end
