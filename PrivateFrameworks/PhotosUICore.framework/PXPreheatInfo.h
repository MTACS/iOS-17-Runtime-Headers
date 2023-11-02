
@interface PXPreheatInfo : NSObject {
    long long  _cachedBytes;
    <PXDisplayAssetFetchResult> * _fetchResult;
    long long  _preheatOrigin;
    NSMutableIndexSet * _preheatedIndexes;
}

@property (nonatomic) long long cachedBytes;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *fetchResult;
@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly) long long preheatOrigin;
@property (nonatomic, readonly) NSMutableIndexSet *preheatedIndexes;

- (void).cxx_destruct;
- (long long)cachedBytes;
- (id)fetchResult;
- (bool)finished;
- (id)initWithFetchResult:(id)arg1 origin:(long long)arg2;
- (void)markAsFinished;
- (long long)preheatOrigin;
- (id)preheatedIndexes;
- (void)setCachedBytes:(long long)arg1;

@end
