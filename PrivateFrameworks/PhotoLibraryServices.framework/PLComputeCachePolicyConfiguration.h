
@interface PLComputeCachePolicyConfiguration : NSObject {
    bool  _isBackupEnabled;
    bool  _isRestoreEnabled;
    unsigned long long  _minAssetCount;
    unsigned long long  _minCloudStorageTier;
    unsigned long long  _minExpungedAssetCount;
    double  _minSnapshotTimeInterval;
}

@property (nonatomic, readonly) bool isBackupEnabled;
@property (nonatomic, readonly) bool isRestoreEnabled;
@property (nonatomic, readonly) unsigned long long minAssetCount;
@property (nonatomic, readonly) unsigned long long minCloudStorageTier;
@property (nonatomic, readonly) unsigned long long minExpungedAssetCount;
@property (nonatomic, readonly) double minSnapshotTimeInterval;

- (void)configurationValueForKey:(id)arg1 configurationDictionary:(id)arg2 valueBlock:(id /* block */)arg3;
- (id)initWithConfigurationDictionary:(id)arg1;
- (bool)isBackupEnabled;
- (bool)isRestoreEnabled;
- (unsigned long long)minAssetCount;
- (unsigned long long)minCloudStorageTier;
- (unsigned long long)minExpungedAssetCount;
- (double)minSnapshotTimeInterval;

@end
