
@interface _PSRuleMiningModel : NSObject {
    bool  __PSRuleMiningIsAdaptedMLModelOK;
    bool  __PSRuleMiningIsMLModelInUse;
    double  __PSRuleMiningMLModelScoreThreshold;
    long long  __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
    double  __PSRuleMiningModelMinRuleConfidenceForSuggestion;
    double  __PSRuleMiningModelMinSupportForSuggestion;
    long long  __PSRuleMiningModelRegularizingContextOverlapConstraint;
    BMBehaviorRetriever * _behaviorRetriever;
    NSArray * _behaviorRulesConsideringInTheContext;
    _PSContactResolver * _contactResolver;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSDictionary * _psConfigForAdaptableModel;
    _PSRuleRankingMLModel * _ruleRankingModel;
    NSArray * _scores;
}

@property (nonatomic) bool _PSRuleMiningIsAdaptedMLModelOK;
@property (nonatomic) bool _PSRuleMiningIsMLModelInUse;
@property (nonatomic) double _PSRuleMiningMLModelScoreThreshold;
@property (nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
@property (nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion;
@property (nonatomic) double _PSRuleMiningModelMinSupportForSuggestion;
@property (nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint;
@property (nonatomic, readonly) BMBehaviorRetriever *behaviorRetriever;
@property (nonatomic, retain) NSArray *behaviorRulesConsideringInTheContext;
@property (nonatomic, readonly) _PSContactResolver *contactResolver;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property (retain) _PSRuleRankingMLModel *ruleRankingModel;
@property (nonatomic, retain) NSArray *scores;

- (void).cxx_destruct;
- (bool)_PSRuleMiningIsAdaptedMLModelOK;
- (bool)_PSRuleMiningIsMLModelInUse;
- (double)_PSRuleMiningMLModelScoreThreshold;
- (long long)_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
- (double)_PSRuleMiningModelMinRuleConfidenceForSuggestion;
- (double)_PSRuleMiningModelMinSupportForSuggestion;
- (long long)_PSRuleMiningModelRegularizingContextOverlapConstraint;
- (id)behaviorRetriever;
- (id)behaviorRulesConsideringInTheContext;
- (id)contactResolver;
- (id)extractAdaptedModelRecipeID;
- (id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3;
- (id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4;
- (id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2 withConfig:(id)arg3;
- (bool)isAdaptedModelCreated;
- (bool)isAdaptedModelUsed;
- (id)knowledgeStore;
- (void)loadMLModel;
- (id)psConfigForAdaptableModel;
- (id)ruleRankingModel;
- (id)scores;
- (void)setBehaviorRulesConsideringInTheContext:(id)arg1;
- (void)setPsConfigForAdaptableModel:(id)arg1;
- (void)setRuleRankingModel:(id)arg1;
- (void)setScores:(id)arg1;
- (void)set_PSRuleMiningIsAdaptedMLModelOK:(bool)arg1;
- (void)set_PSRuleMiningIsMLModelInUse:(bool)arg1;
- (void)set_PSRuleMiningMLModelScoreThreshold:(double)arg1;
- (void)set_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions:(long long)arg1;
- (void)set_PSRuleMiningModelMinRuleConfidenceForSuggestion:(double)arg1;
- (void)set_PSRuleMiningModelMinSupportForSuggestion:(double)arg1;
- (void)set_PSRuleMiningModelRegularizingContextOverlapConstraint:(long long)arg1;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2;
- (id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3;
- (void)updateAdaptableModelProperties:(id)arg1;
- (void)updateModelProperties:(id)arg1;

@end
