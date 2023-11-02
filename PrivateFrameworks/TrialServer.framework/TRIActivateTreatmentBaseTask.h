
@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask {
    NSDate * _endTime;
    bool  _requiresTreatmentInstallation;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, readonly) bool requiresTreatmentInstallation;

- (void).cxx_destruct;
- (bool)_experimentRecord:(id)arg1 hasConflictWithExperimentsInDatabase:(id)arg2 conflictEndTime:(id*)arg3;
- (id)_nextTasksForRunStatus:(int)arg1;
- (bool)_writeNamespaceDescriptorsWithPaths:(id)arg1 toTreatmentLayer:(unsigned long long)arg2 forExperiment:(id)arg3 treatmentURLs:(id)arg4 context:(id)arg5;
- (id)endTime;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 requiresTreatmentInstallation:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)requiresTreatmentInstallation;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runTaskUsingContext:(id)arg1;
- (id)runTaskUsingContext:(id)arg1 experiment:(id)arg2;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (bool)updateLoggingWithExperimentRecord:(id)arg1 paths:(id)arg2 trackingId:(id)arg3 newLogTreatmentAddedOut:(id*)arg4;

@end
