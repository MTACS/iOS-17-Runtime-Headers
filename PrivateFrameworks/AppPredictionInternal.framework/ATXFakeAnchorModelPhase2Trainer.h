
@interface ATXFakeAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol> {
    NSMutableArray * _candidateIdsForPhase2Training;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)candidateClassifierType;
- (id)candidateIdsForPhase2Training;
- (id)init;
- (id)trainPhase2ForCandidate:(id)arg1 candidateType:(id)arg2;

@end
