
@interface ATDetailedProgressInfoForAssetType : NSObject {
    NSString * _atAssetType;
    unsigned long long  _failedAssetCount;
    double  _progress;
    unsigned long long  _totalAssetsSynced;
    unsigned long long  _totalAssetsToSync;
    unsigned long long  _totalBytesSynced;
    unsigned long long  _totalBytesToSync;
    NSMutableSet * failedAssetIds;
}

@property (getter=getAssetType, nonatomic, retain) NSString *atAssetType;
@property (getter=getFailedAssetsCount, nonatomic) unsigned long long failedAssetCount;
@property (getter=getSyncProgress, nonatomic) double progress;
@property (getter=getTotalAssetsSynced, nonatomic) unsigned long long totalAssetsSynced;
@property (getter=getTotalAssetsToSync, nonatomic) unsigned long long totalAssetsToSync;
@property (getter=getTotalBytesSynced, nonatomic) unsigned long long totalBytesSynced;
@property (getter=getTotalBytesToSync, nonatomic) unsigned long long totalBytesToSync;

+ (id)serializedProgressInfoFromATDetailedProgressInfoForAssetType:(id)arg1;

- (void).cxx_destruct;
- (void)_computeProgress;
- (id)description;
- (id)getAssetType;
- (unsigned long long)getFailedAssetsCount;
- (double)getSyncProgress;
- (unsigned long long)getTotalAssetsSynced;
- (unsigned long long)getTotalAssetsToSync;
- (unsigned long long)getTotalBytesSynced;
- (unsigned long long)getTotalBytesToSync;
- (id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3;
- (id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3 assetCountSynced:(unsigned long long)arg4 byteCountSyned:(unsigned long long)arg5;
- (void)setAtAssetType:(id)arg1;
- (void)setFailedAssetCount:(unsigned long long)arg1;
- (void)setProgress:(double)arg1;
- (void)setTotalAssetsSynced:(unsigned long long)arg1;
- (void)setTotalAssetsToSync:(unsigned long long)arg1;
- (void)setTotalBytesSynced:(unsigned long long)arg1;
- (void)setTotalBytesToSync:(unsigned long long)arg1;
- (void)updateAsset:(id)arg1 syncedWithSuccess:(bool)arg2 bytesDownloaded:(unsigned long long)arg3;
- (void)updateAssetsToDownload:(unsigned long long)arg1;
- (void)updateBytesDownloaded:(unsigned long long)arg1;
- (void)updateBytesToDownload:(unsigned long long)arg1;

@end