
@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)abGroup;
- (id)anchorsDisabledForHomescreen;
- (long long)candidateClassifierTypeForPhase2;
- (id)enabledAnchors;
- (double)highBlendingConfidenceScoreThreshold;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (id)init;
- (id)knownAnchorClasses;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)maxValueForParameterKey:(id)arg1;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)arg1;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)arg1;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)arg1;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)arg1;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)arg1;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)arg1;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)minValueForParameterKey:(id)arg1;
- (double)modelWeightForParameterKey:(id)arg1;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)ratioForLeafNodeDecision;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;

@end
