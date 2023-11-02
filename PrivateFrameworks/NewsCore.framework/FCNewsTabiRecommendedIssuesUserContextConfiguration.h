
@interface FCNewsTabiRecommendedIssuesUserContextConfiguration : NSObject {
    long long  _maximumTagCount;
    long long  _maximumTopicTagsPerHeadline;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) long long maximumTagCount;
@property (nonatomic) long long maximumTopicTagsPerHeadline;

- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMaximumTagCount:(long long)arg1 maximumTopicTagsPerHeadline:(long long)arg2;
- (long long)maximumTagCount;
- (long long)maximumTopicTagsPerHeadline;
- (void)setMaximumTagCount:(long long)arg1;
- (void)setMaximumTopicTagsPerHeadline:(long long)arg1;

@end
