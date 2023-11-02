
@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    long long  _currentIndex;
    <PXDisplayAssetFetchResult> * _fetchResult;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)firstObject;
- (id)init;
- (id)initWithDisplayAssetFetchResult:(id)arg1;
- (id)nextObject;
- (void)reset;

@end
