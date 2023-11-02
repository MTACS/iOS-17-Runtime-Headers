
@interface _PXStoryPrecomposedDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult> {
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
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (void)configureWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 resourcesDataSource:(id)arg2;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)dealloc;
- (id)firstObject;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (const long long*)resourceIndexes;
- (id)resourcesDataSource;
- (void)setCount:(long long)arg1;
- (id)storyDisplayAssetAtIndex:(long long)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
