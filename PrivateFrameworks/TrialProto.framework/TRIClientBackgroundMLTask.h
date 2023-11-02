
@interface TRIClientBackgroundMLTask : TRIPBMessage

@property (nonatomic, retain) TRIAssignment *assignment;
@property (nonatomic, retain) TRIAssignment *customTargeting;
@property (nonatomic, retain) NSMutableArray *customTargetingKeysArray;
@property (nonatomic, readonly) unsigned long long customTargetingKeysArray_Count;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic, retain) TRIPBTimestamp *endDate;
@property (nonatomic) bool hasAssignment;
@property (nonatomic) bool hasCustomTargeting;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasNamespaceId;
@property (nonatomic) bool hasPluginId;
@property (nonatomic) bool hasProjectId;
@property (nonatomic) bool hasSchedulingPolicy;
@property (nonatomic) bool hasSelectedNamespace;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasTaskId;
@property (nonatomic, copy) NSString *namespaceId;
@property (nonatomic, copy) NSString *pluginId;
@property (nonatomic) int projectId;
@property (nonatomic, retain) TRIPBStruct *schedulingPolicy;
@property (nonatomic, retain) TRIClientSelectedNamespace *selectedNamespace;
@property (nonatomic, retain) TRIPBTimestamp *startDate;
@property (nonatomic, copy) NSString *taskId;

+ (id)descriptor;

@end
