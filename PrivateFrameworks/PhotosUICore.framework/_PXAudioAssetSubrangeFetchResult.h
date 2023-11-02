
@interface _PXAudioAssetSubrangeFetchResult : NSObject <PXAudioAssetFetchResult> {
    <PXAudioAssetFetchResult> * _fetchResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _subrange;
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
- (id)initWithFetchResult:(id)arg1 subrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end
