
@interface ATXSearchResult : SFSearchResult <NSSecureCoding> {
    ATXProactiveSuggestion * _proactiveSuggestion;
    ATXResponse * _response;
    ATXScoredPrediction * _scoredBundleId;
}

@property (nonatomic, readonly) ATXProactiveSuggestion *proactiveSuggestion;
@property (nonatomic, readonly) ATXResponse *response;
@property (nonatomic, readonly) ATXScoredPrediction *scoredBundleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScoredBundleId:(id)arg1 response:(id)arg2 proactiveSuggestion:(id)arg3;
- (id)proactiveSuggestion;
- (id)response;
- (id)scoredBundleId;

@end
