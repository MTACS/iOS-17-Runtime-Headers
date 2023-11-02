
@interface ATXAnchorModelTrainer : NSObject <ATXAnchorModelTrainerProtocol> {
    <ATXAnchorModelDataStoreWrapperProtocol> * _dataStoreWrapper;
    ATXAnchorModelHyperParameters * _hyperparameters;
    NSDate * _trainingStartDate;
    ATXXPCActivity * _xpcActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)anchorWasRecentlyTrained:(id)arg1;
- (id)anchorsToIncludeInTraining;
- (id)candidateTypeFromCandidateId:(id)arg1;
- (id)init;
- (id)initWithXPCActivity:(id)arg1;
- (id)initWithXPCActivity:(id)arg1 dataStoreWrapper:(id)arg2;
- (void)train;
- (id)trainAnchorModel:(id)arg1;
- (id)trainAnchorModel:(id)arg1 phase1Trainer:(id)arg2 phase2Trainer:(id)arg3 phase3Trainer:(id)arg4;
- (id)trainModelPerCandidateSelectedInPhase1:(id)arg1 phase2Trainer:(id)arg2 phase3Trainer:(id)arg3 phase1Results:(id)arg4;

@end
