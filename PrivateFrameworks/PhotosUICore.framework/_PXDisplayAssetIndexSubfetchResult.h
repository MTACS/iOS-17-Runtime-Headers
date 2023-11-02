
@interface _PXDisplayAssetIndexSubfetchResult : NSObject <PXDisplayAssetFetchResult> {
    long long  _count;
    long long * _indexMap;
    NSIndexSet * _indexSet;
    <PXDisplayAssetFetchResult> * _originalFetchResult;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAsset> *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXDisplayAsset> *lastObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)firstObject;
- (id)initWithFetchResult:(id)arg1 indexSet:(id)arg2;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
