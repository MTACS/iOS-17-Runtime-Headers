
@interface CKDAssetCacheEvictionInfo : NSObject {
    NSMutableOrderedSet * _assetHandleItemIDsToDelete;
    bool  _clearRegisteredItems;
    bool  _evictNow;
    bool  _forced;
    NSMutableOrderedSet * _itemIDsToUnregister;
}

@property (nonatomic, readonly) NSMutableOrderedSet *assetHandleItemIDsToDelete;
@property bool clearRegisteredItems;
@property (nonatomic, readonly) bool evictNow;
@property (nonatomic, readonly) bool forced;
@property (nonatomic, readonly) NSMutableOrderedSet *itemIDsToUnregister;

- (void).cxx_destruct;
- (id)assetHandleItemIDsToDelete;
- (bool)clearRegisteredItems;
- (bool)evictNow;
- (bool)forced;
- (id)initWithForced:(bool)arg1 evictNow:(bool)arg2;
- (id)itemIDsToUnregister;
- (void)setClearRegisteredItems:(bool)arg1;

@end
