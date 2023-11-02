
@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache> {
    <AVTImageCache> * _firstLevelCache;
    <AVTImageCache> * _secondLevelCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <AVTImageCache> *firstLevelCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTImageCache> *secondLevelCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)firstLevelCache;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (id)initWithFirstLevelCache:(id)arg1 secondLevelCache:(id)arg2 environment:(id)arg3;
- (bool)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (id)secondLevelCache;

@end
