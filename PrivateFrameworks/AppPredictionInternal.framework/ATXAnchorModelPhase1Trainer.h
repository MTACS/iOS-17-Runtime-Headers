
@interface ATXAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol> {
    ATXAnchor * _anchor;
    ATXAnchorModelHyperParameters * _hyperParameters;
    ATXAnchorModelDataStoreWrapper * _storeWrapper;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logPredictionsFilteredDuringPhase1WithCandidateIdsToConsider:(id)arg1 selectedCandidates:(id)arg2;
- (double)anchorPopularityForCandidate:(id)arg1;
- (bool)candidateSatisfiesAllThresholds:(id)arg1 trainingResult:(id)arg2;
- (bool)candidateUniqueAnchorOccurrencesIsAtLeastMinimum:(long long)arg1 candidateId:(id)arg2 trainingResult:(id)arg3;
- (double)classConditionalProbabilityOfAnchorForCandidate:(id)arg1;
- (bool)classConditionalProbabilityOfAnchorIsAtLeastMinimum:(double)arg1 candidateId:(id)arg2 trainingResult:(id)arg3;
- (double)globalPopularityForCandidate:(id)arg1;
- (id)init;
- (id)initForAnchor:(id)arg1;
- (id)initForAnchor:(id)arg1 anchorModelDataStoreWrapper:(id)arg2;
- (id)initForAnchor:(id)arg1 anchorModelDataStoreWrapper:(id)arg2 hyperParameters:(id)arg3 tracker:(id)arg4;
- (double)posteriorProbabilityConditionedOnAnchorForCandidate:(id)arg1;
- (bool)posteriorProbabilityConditionedOnAnchorIsAtLeastMinimum:(double)arg1 candidateId:(id)arg2 trainingResult:(id)arg3;
- (id)selectedPredictionCandidates;
- (double)standardDeviationOfNumbers:(id)arg1;
- (double)standardDeviationOfSecondsAfterAnchorForFirstOccurrenceOfCandidateId:(id)arg1;
- (id)trainPhase1;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor;

@end
