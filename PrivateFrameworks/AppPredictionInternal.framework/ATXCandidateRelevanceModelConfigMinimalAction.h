
@interface ATXCandidateRelevanceModelConfigMinimalAction : ATXCandidateRelevanceModelConfig {
    ATXActionPredictionBlacklist * _actionBlacklist;
    ATXDigitalHealthBlacklist * _appDigitalHealthBlacklist;
}

@property (nonatomic, retain) ATXActionPredictionBlacklist *actionBlacklist;
@property (nonatomic, retain) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;

- (void).cxx_destruct;
- (id)actionBlacklist;
- (id)appDigitalHealthBlacklist;
- (bool)candidateIsStillValidToSuggest:(id)arg1;
- (id)candidatePublisherFromStartTime:(double)arg1;
- (id)datasetGenerator;
- (id)heuristicSuggestionsForContext:(id)arg1 currentSuggestionExecutableIds:(id)arg2;
- (id)init;
- (id)proactiveSuggestionForCandidate:(id)arg1 prediction:(float)arg2;
- (void)setActionBlacklist:(id)arg1;
- (void)setAppDigitalHealthBlacklist:(id)arg1;

@end
