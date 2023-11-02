
@interface _PXConcatenatingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult> {
    long long  _count;
    NSArray * _fetchResults;
    long long * _startIndexes;
    long long  _subFetchResultsCount;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXAudioAsset> *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXAudioAsset> *lastObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subFetchResultForIndex:(long long)arg1 localIndex:(long long*)arg2;
- (bool)containsObject:(id)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)firstObject;
- (id)initWithFetchResults:(id)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end
