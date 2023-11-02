
@interface ATXActionPredictions : NSObject

+ (id)_actionPredictionCandidatesForCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 firstStageScoreLogger:(id)arg3 secondStageScoreLogger:(id)arg4 multiStageScoreLogger:(id)arg5 context:(id)arg6 featureCache:(id)arg7 remainingPredictionItems:(void*)arg8;
+ (id)_actionPredictionCandidatesForCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 firstStageScoreLogger:(id)arg3 secondStageScoreLogger:(id)arg4 multiStageScoreLogger:(id)arg5 featureCache:(id)arg6 remainingPredictionItems:(void*)arg7;
+ (id)_predictionsForConsumerSubType:(unsigned char)arg1 thirdStageScoreLogger:(id)arg2 multiStageScoreLogger:(id)arg3 actionPredictionCandidates:(id)arg4 remainingPredictionItems:(void*)arg5 predictionsPerAppActionLimit:(id)arg6;
+ (id)_predictionsForConsumerSubType:(unsigned char)arg1 thirdStageScoreLogger:(id)arg2 multiStageScoreLogger:(id)arg3 context:(id)arg4 actionPredictionCandidates:(id)arg5 remainingPredictionItems:(void*)arg6 predictionsPerAppActionLimit:(id)arg7;
+ (id)actionResultsForCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7 predictionsPerAppActionLimit:(id)arg8;
+ (bool)actionScoreAboveThresholdOrWhitelistedAction:(id)arg1 confidenceThreshold:(double)arg2 actionKeyWhitelist:(id)arg3 actionTypeWhitelist:(id)arg4;
+ (id)actionsFromActions:(id)arg1 byMovingActionsWithBundleIdentifiers:(id)arg2 toRemainingPredictionItems:(void*)arg3;
+ (void)fetchDataAndUpdateContentAttributeSetForActions:(id)arg1;
+ (id)filterHighQualityActionResults:(id)arg1 consumerSubType:(unsigned char)arg2;
+ (unsigned long long)numActionResultsWithOnlyPredictionItemForLogging:(id)arg1;
+ (void)penalizeMultipleActionsPerAppAndKeepSorted:(id)arg1;
+ (id)predictionsWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7;
+ (id)removeActionsBelowThresholdForActionPredictions:(id)arg1 withThreshold:(double)arg2 actionKeyWhitelist:(id)arg3 actionTypeWhitelist:(id)arg4;
+ (id)scoredActionsWithoutLog:(id)arg1;
+ (void)setTVActionPredictionsConfidenceToLow:(id)arg1;
+ (id)sortStageScores:(id)arg1;

- (id)init;

@end
