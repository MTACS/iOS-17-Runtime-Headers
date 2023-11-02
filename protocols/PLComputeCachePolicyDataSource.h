
@protocol PLComputeCachePolicyDataSource

@required

- (unsigned long long)assetCount;
- (bool)hasAtLeastExpungedAssetCount:(unsigned long long)arg1;
- (long long)iCloudStorageSizeInBytes;
- (bool)isEnabled;
- (NSDate *)lastSnapshotDate;
- (long long)restoreState;

@end
