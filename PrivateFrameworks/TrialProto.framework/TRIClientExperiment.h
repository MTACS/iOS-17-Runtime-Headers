
@interface TRIClientExperiment : TRIPBMessage

@property (nonatomic, retain) TRIAssignment *assignment;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic, retain) TRIPBTimestamp *endDate;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasAssignment;
@property (nonatomic) bool hasChannelId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasProjectId;
@property (nonatomic) bool hasProjectName;
@property (nonatomic) bool hasSeed;
@property (nonatomic) bool hasShadowEvaluation;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasType;
@property (nonatomic) int priority;
@property (nonatomic) int projectId;
@property (nonatomic, copy) NSString *projectName;
@property (nonatomic) unsigned int seed;
@property (nonatomic, retain) TRIShadowEvaluation *shadowEvaluation;
@property (nonatomic, retain) TRIPBTimestamp *startDate;
@property (nonatomic) int type;

+ (id)descriptor;

@end
