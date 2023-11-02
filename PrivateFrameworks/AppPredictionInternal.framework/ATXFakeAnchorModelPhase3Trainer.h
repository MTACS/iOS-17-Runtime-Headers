
@interface ATXFakeAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol> {
    NSMutableArray * _candidateIdsForPhase3Training;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)candidateIdsForPhase3Training;
- (id)init;
- (id)trainPhase3ForCandidate:(id)arg1;

@end
