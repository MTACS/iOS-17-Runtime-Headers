
@interface _PXStoryConcreteScorerDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult> {
    PXStoryReusableDisplayAsset * _asset;
    long long  _capacity;
    long long  _count;
    long long * _resourceIndexes;
    PXStoryResourcesDataSource * _resourcesDataSource;
}

@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAsset> *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXDisplayAsset> *lastObject;
@property (nonatomic, readonly) const long long*resourceIndexes;
@property (nonatomic, retain) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResourceWithIndex:(long long)arg1;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)dealloc;
- (id)firstObject;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeAllResources;
- (const long long*)resourceIndexes;
- (id)resourcesDataSource;
- (void)setCount:(long long)arg1;
- (void)setResourcesDataSource:(id)arg1;
- (id)storyDisplayAssetAtIndex:(long long)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
