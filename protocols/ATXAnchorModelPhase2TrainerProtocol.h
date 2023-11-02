
@protocol ATXAnchorModelPhase2TrainerProtocol <NSObject>

@required

- (long long)candidateClassifierType;
- (<ATXAnchorModelCandidateClassifierProtocol> *)trainPhase2ForCandidate:(NSString *)arg1 candidateType:(NSString *)arg2;

@end
