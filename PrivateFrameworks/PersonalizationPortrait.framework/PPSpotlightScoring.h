
@interface PPSpotlightScoring : NSObject {
    long long  _sandboxExtensionHandle;
    PPTopicStore * _topicStore;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTopicStore:(id)arg1;
- (bool)refreshSpotlightScoringCacheWithError:(id*)arg1;
- (id)spotlightQueryScore:(id)arg1 error:(id*)arg2;

@end
