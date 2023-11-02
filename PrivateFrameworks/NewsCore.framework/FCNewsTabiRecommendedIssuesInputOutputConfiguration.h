
@interface FCNewsTabiRecommendedIssuesInputOutputConfiguration : NSObject {
    NSString * _contextFeatureKey;
    NSString * _recommendedIssuePublisherOutputName;
    NSString * _recommendedIssuePublisherScoreOutputName;
}

@property (nonatomic, retain) NSString *contextFeatureKey;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *recommendedIssuePublisherOutputName;
@property (nonatomic, retain) NSString *recommendedIssuePublisherScoreOutputName;

- (void).cxx_destruct;
- (id)contextFeatureKey;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithContextFeatureKey:(id)arg1 recommendedIssuePublisherOutputName:(id)arg2 recommendedIssuePublisherScoreOutputName:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)recommendedIssuePublisherOutputName;
- (id)recommendedIssuePublisherScoreOutputName;
- (void)setContextFeatureKey:(id)arg1;
- (void)setRecommendedIssuePublisherOutputName:(id)arg1;
- (void)setRecommendedIssuePublisherScoreOutputName:(id)arg1;

@end
