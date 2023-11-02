
@interface NMSSyncProgressInfo : NSObject {
    unsigned long long  _aggregateAssetItemBytesAdded;
    NSString * _assetType;
    float  _estimatedSyncProgress;
    long long  _numberOfAssetItems;
    long long  _numberOfAssetItemsNeedingDownload;
    long long  _numberOfAssetItemsSynced;
    unsigned long long  _syncState;
    unsigned long long  _syncWaitingSubstate;
}

@property (nonatomic) unsigned long long aggregateAssetItemBytesAdded;
@property (nonatomic, retain) NSString *assetType;
@property (nonatomic) float estimatedSyncProgress;
@property (nonatomic) long long numberOfAssetItems;
@property (nonatomic) long long numberOfAssetItemsNeedingDownload;
@property (nonatomic) long long numberOfAssetItemsSynced;
@property (nonatomic) unsigned long long syncState;
@property (nonatomic) unsigned long long syncWaitingSubstate;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

+ (id)_stringFromSyncState:(unsigned long long)arg1;
+ (id)_stringFromWaitingSubstate:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)aggregateAssetItemBytesAdded;
- (id)assetType;
- (id)description;
- (float)estimatedSyncProgress;
- (long long)numberOfAssetItems;
- (long long)numberOfAssetItemsNeedingDownload;
- (long long)numberOfAssetItemsSynced;
- (void)setAggregateAssetItemBytesAdded:(unsigned long long)arg1;
- (void)setAssetType:(id)arg1;
- (void)setEstimatedSyncProgress:(float)arg1;
- (void)setNumberOfAssetItems:(long long)arg1;
- (void)setNumberOfAssetItemsNeedingDownload:(long long)arg1;
- (void)setNumberOfAssetItemsSynced:(long long)arg1;
- (void)setSyncState:(unsigned long long)arg1;
- (void)setSyncWaitingSubstate:(unsigned long long)arg1;
- (unsigned long long)syncState;
- (unsigned long long)syncWaitingSubstate;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

- (bool)_isSyncing;
- (id)_legacyTrackProgressTextWithFormat:(id)arg1;
- (id)_syncProgressTextForMediaType:(unsigned int)arg1;
- (id)_trackProgressTextForMediaType:(unsigned int)arg1;

@end
