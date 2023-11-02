
@interface DOCThumbnailCache : NSObject {
    NSMapTable * _cachedThumbnailNodes;
    NSCache * _recentlyUsedNodes;
}

@property (nonatomic, readonly) NSMapTable *cachedThumbnailNodes;
@property (nonatomic, readonly) NSCache *recentlyUsedNodes;

- (void).cxx_destruct;
- (id)cachedThumbnailNodes;
- (void)clear;
- (id)init;
- (id)recentlyUsedNodes;

@end
