
@interface ATXAnchorModelTrainingResult : NSObject {
    ATXAnchor * _anchor;
    <ATXAnchorModelCandidateClassifierProtocol> * _candidateClassifier;
    long long  _candidateClassifierType;
    NSString * _candidateId;
    NSString * _candidateType;
    ATXAnchorModelPredictionOffsetFromAnchorOccurrence * _offsetFromAnchorToShowPrediction;
    ATXAnchorModelPhase1TrainingResult * _phase1TrainingResult;
}

@property (nonatomic, readonly) ATXAnchor *anchor;
@property (nonatomic, readonly) <ATXAnchorModelCandidateClassifierProtocol> *candidateClassifier;
@property (nonatomic, readonly) long long candidateClassifierType;
@property (nonatomic, readonly) NSString *candidateId;
@property (nonatomic, readonly) NSString *candidateType;
@property (nonatomic, readonly) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction;
@property (nonatomic, readonly) ATXAnchorModelPhase1TrainingResult *phase1TrainingResult;

- (void).cxx_destruct;
- (id)anchor;
- (id)candidateClassifier;
- (long long)candidateClassifierType;
- (id)candidateId;
- (id)candidateType;
- (id)description;
- (id)initWithAnchor:(id)arg1 candidateId:(id)arg2 candidateType:(id)arg3 phase1TrainingResult:(id)arg4 candidateClassifier:(id)arg5 candidateClassifierType:(long long)arg6 offsetFromAnchorToShowPrediction:(id)arg7;
- (id)offsetFromAnchorToShowPrediction;
- (id)phase1TrainingResult;

@end
