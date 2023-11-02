
@interface HRERecommendationEngine : NSObject {
    HRERankConfidenceController * _rankingController;
    NSMutableArray * _recommendationSources;
    HRETemplateRecommendationGenerator * _templateSource;
}

@property (nonatomic, retain) HRERankConfidenceController *rankingController;
@property (nonatomic, retain) NSMutableArray *recommendationSources;
@property (nonatomic, retain) HRETemplateRecommendationGenerator *templateSource;
@property (nonatomic, retain) NSArray *templates;

- (void).cxx_destruct;
- (id)_sourcesEnabledWithOptions:(unsigned long long)arg1;
- (id)generateRecommendationsForHome:(id)arg1 options:(unsigned long long)arg2;
- (id)generateRecommendationsForServiceLikeItems:(id)arg1 accessoryTypeGroup:(id)arg2 inHome:(id)arg3 options:(unsigned long long)arg4;
- (id)generateRecommendationsForServiceLikeItems:(id)arg1 inHome:(id)arg2 options:(unsigned long long)arg3;
- (id)init;
- (id)rankingController;
- (id)recommendationSources;
- (id)recommendationsForAccessoryTypeGroup:(id)arg1 inHome:(id)arg2 options:(unsigned long long)arg3;
- (void)setRankingController:(id)arg1;
- (void)setRecommendationSources:(id)arg1;
- (void)setTemplateSource:(id)arg1;
- (void)setTemplates:(id)arg1;
- (id)templateSource;
- (id)templates;

@end
