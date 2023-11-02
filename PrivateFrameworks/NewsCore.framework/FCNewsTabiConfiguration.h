
@interface FCNewsTabiConfiguration : NSObject {
    FCNewsTabiChannelPickerSuggestionsConfiguration * _channelPickerSuggestionsConfiguration;
    FCNewsTabiEventAggregationConfiguration * _eventAggregationConfiguration;
    FCNewsTabiFeedPersonalizationConfiguration * _feedPersonalizationConfiguration;
    long long  _mlComputeUnits;
    NSArray * _packageAssetIDs;
    FCNewsTabiPersonalizedPaywallsConfiguration * _personalizedPaywallsConfiguration;
    FCNewsTabiRecommendedIssuesConfiguration * _recommendedIssuesConfiguration;
    bool  _tagScoringEnabled;
    NSString * _version;
}

@property (nonatomic, retain) FCNewsTabiChannelPickerSuggestionsConfiguration *channelPickerSuggestionsConfiguration;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) FCNewsTabiEventAggregationConfiguration *eventAggregationConfiguration;
@property (nonatomic, retain) FCNewsTabiFeedPersonalizationConfiguration *feedPersonalizationConfiguration;
@property (nonatomic) long long mlComputeUnits;
@property (nonatomic, retain) NSArray *packageAssetIDs;
@property (nonatomic, retain) FCNewsTabiPersonalizedPaywallsConfiguration *personalizedPaywallsConfiguration;
@property (nonatomic, retain) FCNewsTabiRecommendedIssuesConfiguration *recommendedIssuesConfiguration;
@property (nonatomic) bool tagScoringEnabled;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)channelPickerSuggestionsConfiguration;
- (id)description;
- (id)dictionary;
- (id)eventAggregationConfiguration;
- (id)feedPersonalizationConfiguration;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)mlComputeUnits;
- (id)packageAssetIDs;
- (id)personalizedPaywallsConfiguration;
- (id)recommendedIssuesConfiguration;
- (void)setChannelPickerSuggestionsConfiguration:(id)arg1;
- (void)setEventAggregationConfiguration:(id)arg1;
- (void)setFeedPersonalizationConfiguration:(id)arg1;
- (void)setMlComputeUnits:(long long)arg1;
- (void)setPackageAssetIDs:(id)arg1;
- (void)setPersonalizedPaywallsConfiguration:(id)arg1;
- (void)setRecommendedIssuesConfiguration:(id)arg1;
- (void)setTagScoringEnabled:(bool)arg1;
- (void)setVersion:(id)arg1;
- (bool)tagScoringEnabled;
- (id)version;

@end
