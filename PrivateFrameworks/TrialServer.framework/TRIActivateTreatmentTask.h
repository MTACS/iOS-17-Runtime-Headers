
@interface TRIActivateTreatmentTask : TRIActivateTreatmentBaseTask <TRIRetryableTask> {
    TRITaskCapabilityModifier * _capabilityModifier;
    TRITaskOptions * _taskOptions;
    bool  _testingIgnoreDependencies;
    TRIMetric * _treatmentMetric;
    int  retryCount;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;
@property (nonatomic) bool testingIgnoreDependencies;
@property bool wasDeferred;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 requiresTreatmentInstallation:(bool)arg4 capabilityModifier:(id)arg5 startTime:(id)arg6 taskOptions:(id)arg7;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (id)_nextTasksForRunStatus:(int)arg1;
- (bool)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)arg1 context:(id)arg2;
- (id)dependencies;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (id)runTaskUsingContext:(id)arg1 experiment:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setTestingIgnoreDependencies:(bool)arg1;
- (void)setWasDeferred:(bool)arg1;
- (int)taskType;
- (bool)testingIgnoreDependencies;
- (bool)wasDeferred;

@end
