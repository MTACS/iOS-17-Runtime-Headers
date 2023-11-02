
@interface FCNewsPersonalizationFeatureConfiguration : NSObject {
    long long  _articleLengthLongThreshold;
    long long  _articleLengthMediumThreshold;
    long long  _publisherTopicPairPublisherEventCountThreshold;
    long long  _publisherTopicPairTopicEventCountThreshold;
}

@property (nonatomic) long long articleLengthLongThreshold;
@property (nonatomic) long long articleLengthMediumThreshold;
@property (nonatomic) long long publisherTopicPairPublisherEventCountThreshold;
@property (nonatomic) long long publisherTopicPairTopicEventCountThreshold;

+ (long long)defaultArticleLengthLongThreshold;
+ (long long)defaultArticleLengthMediumThreshold;
+ (long long)defaultPublisherTopicPairPublisherEventCountThreshold;
+ (long long)defaultPublisherTopicPairTopicEventCountThreshold;

- (long long)articleLengthLongThreshold;
- (long long)articleLengthMediumThreshold;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (long long)publisherTopicPairPublisherEventCountThreshold;
- (long long)publisherTopicPairTopicEventCountThreshold;
- (void)setArticleLengthLongThreshold:(long long)arg1;
- (void)setArticleLengthMediumThreshold:(long long)arg1;
- (void)setPublisherTopicPairPublisherEventCountThreshold:(long long)arg1;
- (void)setPublisherTopicPairTopicEventCountThreshold:(long long)arg1;

@end
