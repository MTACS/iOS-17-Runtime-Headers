
@interface EMFAnchoredSearchAnchorsCache : NSObject <NSCacheDelegate> {
    NSCache * _anchorsCache;
}

@property (nonatomic, retain) NSCache *anchorsCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)anchorCollectionForLocaleIdentifier:(id)arg1;
- (id)anchorsCache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;
- (void)purgeAllCachedAnchorCollections;
- (void)removeAnchorCollectionForLocaleIdentifier:(id)arg1;
- (void)setAnchorCollection:(id)arg1 forLocaleIdentifier:(id)arg2;
- (void)setAnchorsCache:(id)arg1;

@end
