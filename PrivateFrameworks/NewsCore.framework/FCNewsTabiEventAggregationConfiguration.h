
@interface FCNewsTabiEventAggregationConfiguration : NSObject {
    FCNewsTabiEventAggregationOutputConfiguration * _bundleOutputConfiguration;
    FCNewsTabiEventAggregationConditions * _eventConditions;
    NSDictionary * _eventUtilizationProbabilities;
    long long  _fullBodyEmbeddingDimension;
    long long  _maxSessionEvents;
    long long  _maxTopicIds;
    FCNewsTabiEventAggregationOutputConfiguration * _nonBundleOutputConfiguration;
    bool  _readEventsOnly;
    long long  _titleEmbeddingDimension;
}

@property (nonatomic, retain) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) FCNewsTabiEventAggregationConditions *eventConditions;
@property (nonatomic, retain) NSDictionary *eventUtilizationProbabilities;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxSessionEvents;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic, retain) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) bool readEventsOnly;
@property (nonatomic) long long titleEmbeddingDimension;

- (void).cxx_destruct;
- (id)bundleOutputConfiguration;
- (id)description;
- (id)dictionary;
- (id)eventConditions;
- (id)eventUtilizationProbabilities;
- (long long)fullBodyEmbeddingDimension;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMaxTopicIds:(long long)arg1 maxSessionEvents:(long long)arg2 readEventsOnly:(bool)arg3 titleEmbeddingDimension:(long long)arg4 fullBodyEmbeddingDimension:(long long)arg5 bundleOutputConfiguration:(id)arg6 nonBundleOutputConfiguration:(id)arg7 eventConditions:(id)arg8;
- (long long)maxSessionEvents;
- (long long)maxTopicIds;
- (id)nonBundleOutputConfiguration;
- (bool)readEventsOnly;
- (void)setBundleOutputConfiguration:(id)arg1;
- (void)setEventConditions:(id)arg1;
- (void)setEventUtilizationProbabilities:(id)arg1;
- (void)setFullBodyEmbeddingDimension:(long long)arg1;
- (void)setMaxSessionEvents:(long long)arg1;
- (void)setMaxTopicIds:(long long)arg1;
- (void)setNonBundleOutputConfiguration:(id)arg1;
- (void)setReadEventsOnly:(bool)arg1;
- (void)setTitleEmbeddingDimension:(long long)arg1;
- (long long)titleEmbeddingDimension;

@end
