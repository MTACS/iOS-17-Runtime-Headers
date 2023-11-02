
@interface _PXConcatenatingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {
    long long  _count;
    NSArray * _fetchResults;
    long long * _startIndexes;
    long long  _subFetchResultsCount;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAsset> *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXDisplayAsset> *lastObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subFetchResultForIndex:(long long)arg1 localIndex:(long long*)arg2;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)firstObject;
- (id)initWithFetchResults:(id)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
