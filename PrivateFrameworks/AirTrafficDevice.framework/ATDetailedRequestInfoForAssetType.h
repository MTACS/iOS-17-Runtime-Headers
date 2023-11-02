
@interface ATDetailedRequestInfoForAssetType : NSObject {
    NSMutableDictionary * _mutableContributors;
    unsigned long long  _totalAssetsToSync;
    unsigned long long  _totalBytesSynced;
    unsigned long long  _totalBytesToSync;
}

@property (getter=getContributors, nonatomic, readonly) NSDictionary *contributors;
@property (getter=getTotalAssetsToSync, nonatomic, readonly) unsigned long long totalAssetsToSync;
@property (getter=getTotalBytesSynced, nonatomic, readonly) unsigned long long totalBytesSynced;
@property (getter=getTotalBytesToSync, nonatomic, readonly) unsigned long long totalBytesToSync;

+ (id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)getContributors;
- (unsigned long long)getTotalAssetsToSync;
- (unsigned long long)getTotalBytesSynced;
- (unsigned long long)getTotalBytesToSync;
- (void)incrementAssetCountToSync;
- (id)init;
- (void)updateBytesSynced:(unsigned long long)arg1;
- (void)updateBytesToSync:(unsigned long long)arg1 forItemIdentifier:(id)arg2;

@end
