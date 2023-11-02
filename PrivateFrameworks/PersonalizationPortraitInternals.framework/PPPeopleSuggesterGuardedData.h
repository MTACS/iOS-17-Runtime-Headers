
@interface PPPeopleSuggesterGuardedData : NSObject {
    NSCache * _cache;
    NSDate * _lastCacheSweepDate;
    _PSSuggester * _suggester;
}

- (void).cxx_destruct;

@end
