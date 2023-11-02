
@interface _PXMappingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult> {
    id /* block */  _block;
    <PXAudioAssetFetchResult> * _fetchResult;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXAudioAsset> *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXAudioAsset> *lastObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)firstObject;
- (id)initWithFetchResult:(id)arg1 block:(id /* block */)arg2;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end
