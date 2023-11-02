
@interface ATXAnchorModelActionPredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction * _anchorModelPrediction;
    ATXActionPredictionBlacklist * _blacklist;
    ATXAnchorModelDataStoreWrapper * _storeWrapper;
}

+ (id)anchorPredictionScoredActionTuplesFromPredictions:(id)arg1;
+ (void)inPlaceDeduplicateAnchorPredictionScoredActionTuples:(id)arg1;

- (void).cxx_destruct;
- (id)initWithAnchorModelPrediction:(id)arg1;
- (id)initWithAnchorModelPrediction:(id)arg1 blacklist:(id)arg2;
- (id)postProcessScoredAction:(id)arg1;
- (id)recoverATXScoredAction;
- (id)replaceActionWithUpcomingMediaIfNeeded:(id)arg1;
- (id)replacementActionWithResolvedMediaIntentContainer:(id)arg1 originalAction:(id)arg2;
- (id)replacementIntentFromUpcomingMediaForBundleId:(id)arg1 intent:(id)arg2;
- (bool)scoredActionIsBlacklisted:(id)arg1;
- (bool)shouldCheckUpcomingMediaForIntent:(id)arg1;

@end
