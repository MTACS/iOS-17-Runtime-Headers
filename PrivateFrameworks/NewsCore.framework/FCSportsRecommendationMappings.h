
@interface FCSportsRecommendationMappings : NSObject {
    FCSportsRecommendationsProvider * _alternativeRecommendations;
    FCSportsRecommendationsProvider * _defaultRecommendations;
}

@property (nonatomic, retain) FCSportsRecommendationsProvider *alternativeRecommendations;
@property (nonatomic, retain) FCSportsRecommendationsProvider *defaultRecommendations;

- (void).cxx_destruct;
- (id)alternativeRecommendations;
- (id)defaultRecommendations;
- (id)initWithDictionary:(id)arg1;
- (void)setAlternativeRecommendations:(id)arg1;
- (void)setDefaultRecommendations:(id)arg1;

@end
