
@interface TRIPostUpgradeCleanupTask : TRIBaseTask <TRITask> {
    NSMutableSet * _invalidBMLTDeployments;
    NSMutableSet * _invalidExperimentDeployments;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)task;

- (void).cxx_destruct;
- (bool)_activeBMLTIsCompatible:(id)arg1 upgradeNCVs:(id)arg2 downloadNCVs:(id)arg3;
- (bool)_activeRolloutIsCompatible:(id)arg1 upgradeNCVs:(id)arg2 downloadNCVs:(id)arg3;
- (id)_asPersistedTask;
- (bool)_migrateProtobufFactorPacksToFlatbuffersUsingPaths:(id)arg1;
- (bool)_migrateToGlobalAssetStoreIfNeededUsingPaths:(id)arg1;
- (bool)_migrateTreatmentsFolderIfNeededUsingContext:(id)arg1;
- (id)_nextTasksForRunStatus:(int)arg1;
- (bool)_removePromotionsUsingPaths:(id)arg1;
- (bool)_saveProtoToFlatbufferFormatWithPaths:(id)arg1 namespaceUrl:(id)arg2;
- (bool)_validateBMLTNamespaceNCVs:(id)arg1 downloadNCVs:(id)arg2 context:(id)arg3;
- (bool)_validateDynamicNamespaceRolloutsWithDatabase:(id)arg1 usingPaths:(id)arg2;
- (bool)_validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 database:(id)arg2;
- (bool)_validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 usingPaths:(id)arg2;
- (bool)_validateRolloutNamespaceNCVs:(id)arg1 downloadNCVs:(id)arg2 context:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (int)taskType;

@end
