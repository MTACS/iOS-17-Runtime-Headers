
@interface ICQUsageStorageMonitor : NSObject {
    float  _availableSize;
    ICQUsageStorageCache * _cache;
    UIBarButtonItem * _footerItem;
    NSArray * _footerItems;
    UILabel * _footerLabel;
    long long  _storageClientCount;
    float  _usedSize;
}

@property (nonatomic, readonly) float availableSize;
@property (nonatomic, readonly) NSArray *footerItems;
@property (nonatomic) float usedSize;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_setAvailable:(float)arg1;
- (float)availableSize;
- (void)clearUsageDataCache;
- (void)deregisterUsageStorageClient;
- (void)fetchSystemSizeStrings;
- (void)flushViews;
- (id)footerItems;
- (id)init;
- (id)mediaCollectionForKey:(id)arg1;
- (void)populateUsageDataWithProgressBlock:(id /* block */)arg1;
- (void)registerUsageStorageClient;
- (void)removeMediaCollectionCacheForKey:(id)arg1;
- (void)setUsedSize:(float)arg1;
- (float)usedSize;

@end
