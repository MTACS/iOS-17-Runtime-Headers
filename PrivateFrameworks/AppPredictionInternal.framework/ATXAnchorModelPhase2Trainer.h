
@interface ATXAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol> {
    ATXAnchor * _anchor;
    ATXAnchorModelHyperParameters * _hyperParameters;
    ATXAnchorModelDataStoreWrapper * _storeWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)candidateClassifierType;
- (id)initForAnchor:(id)arg1;
- (id)initForAnchor:(id)arg1 anchorModelDataStoreWrapper:(id)arg2;
- (id)trainClassifierForCandidateId:(id)arg1 candidateType:(id)arg2;
- (id)trainGamePlayKitDecisionTreeCandidateClassifierForCandidate:(id)arg1 candidateType:(id)arg2;
- (id)trainNaivePositiveCandidateClassifierForCandidate:(id)arg1 candidateType:(id)arg2;
- (id)trainPhase2ForCandidate:(id)arg1 candidateType:(id)arg2;
- (id)trainStrictContextMatchCandidateClassifierForCandidate:(id)arg1 candidateType:(id)arg2;

@end
