
@interface TRIFetchTreatmentTask : TRITreatmentBaseTask <TRIRetryableTask> {
    TRITaskCapabilityModifier * _capabilityModifier;
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
@property bool wasDeferred;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 capabilityModifier:(id)arg4;

- (void).cxx_destruct;
- (void)_addMetricForFetchTreatmentTaskError:(int)arg1;
- (id)_asPersistedTask;
- (bool)_downloadAndSaveMAAssets:(id)arg1 options:(id)arg2 downloadNotificationKey:(id)arg3 context:(id)arg4 errorResult:(id*)arg5 fetchError:(id*)arg6;
- (id)_fetchAssetsWithArtifactProvider:(id)arg1 recordId:(id)arg2 experimentRecord:(id)arg3 assetIndexes:(id)arg4 downloadOptions:(id)arg5 context:(id)arg6 assetURLs:(id*)arg7 treatmentFetchError:(id*)arg8;
- (id)_fetchTreatmentWithArtifactProvider:(id)arg1 experimentRecord:(id)arg2 downloadOptions:(id)arg3 context:(id)arg4 treatment:(id*)arg5 recordId:(id*)arg6 treatmentFetchError:(id*)arg7;
- (id)_namespaceDescriptorForNamespaceName:(id)arg1 fromExperimentRecord:(id)arg2 referencingFactorsURL:(id)arg3;
- (unsigned int)_ncvForNamespaceName:(id)arg1 inExperimentRecord:(id)arg2;
- (id)_nextTasksForRunStatus:(int)arg1;
- (id)_nextTasksForRunStatusFailureWithDeactivationReason:(unsigned long long)arg1;
- (id)_saveTreatment:(id)arg1 experimentRecord:(id)arg2 assetURLs:(id)arg3 assetMetadata:(id)arg4 context:(id)arg5 paths:(id)arg6 downloadOptions:(id)arg7;
- (id)dependencies;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 capabilityModifier:(id)arg4;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (int)taskType;
- (bool)wasDeferred;

@end
