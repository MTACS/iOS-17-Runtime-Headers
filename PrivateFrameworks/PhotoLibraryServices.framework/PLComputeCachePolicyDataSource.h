
@interface PLComputeCachePolicyDataSource : NSObject <PLComputeCachePolicyDataSource> {
    PLPhotoLibrary * _photoLibrary;
    long long  _restoreState;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) long long iCloudStorageSizeInBytes;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) NSDate *lastSnapshotDate;
@property (nonatomic, readonly) long long restoreState;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (bool)hasAtLeastExpungedAssetCount:(unsigned long long)arg1;
- (long long)iCloudStorageSizeInBytes;
- (id)initWithPhotoLibrary:(id)arg1 restoreState:(long long)arg2;
- (bool)isEnabled;
- (id)lastSnapshotDate;
- (long long)restoreState;

@end
