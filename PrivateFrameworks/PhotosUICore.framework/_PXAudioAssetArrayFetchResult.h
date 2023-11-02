
@interface _PXAudioAssetArrayFetchResult : NSObject <PXAudioAssetFetchResult> {
    NSArray * _assets;
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
- (id)description;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)firstObject;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end
