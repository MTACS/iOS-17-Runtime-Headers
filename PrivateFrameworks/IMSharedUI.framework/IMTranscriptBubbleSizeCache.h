
@interface IMTranscriptBubbleSizeCache : NSObject {
    NSMutableArray * _sizeCache;
}

@property (retain) NSMutableArray *sizeCache;

- (void).cxx_destruct;
- (id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long*)arg2;
- (void)_insertCacheEntry:(id)arg1;
- (void)flush;
- (id)init;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forMaximumWidth:(double)arg2;
- (void)setSizeCache:(id)arg1;
- (id)sizeCache;
- (struct CGSize { double x1; double x2; })sizeForMaximumWidth:(double)arg1;

@end
