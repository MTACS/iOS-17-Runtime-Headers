
@interface _PXWrappingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {
    <PXDisplayAssetFetchResult> * _displayFetchResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
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
- (id)description;
- (id)firstObject;
- (id)initWithFetchResult:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
