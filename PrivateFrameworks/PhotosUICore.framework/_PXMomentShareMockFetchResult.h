
@interface _PXMomentShareMockFetchResult : NSObject <PXDisplayAssetFetchResult> {
    NSArray * _assets;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAsset> *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXDisplayAsset> *lastObject;
@property (readonly) Class superclass;

+ (id)momentShareMockFetchResultWithPhotosCount:(unsigned long long)arg1 videosCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (id)firstObject;
- (id)initWithAssets:(id)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
