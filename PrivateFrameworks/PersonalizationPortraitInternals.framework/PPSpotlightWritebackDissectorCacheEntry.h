
@interface PPSpotlightWritebackDissectorCacheEntry : NSObject {
    NSDate * _cachingDate;
    double  _score;
}

@property (nonatomic, readonly) NSDate *cachingDate;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (id)cachingDate;
- (id)initWithCachingDate:(id)arg1 score:(double)arg2;
- (double)score;

@end
