
@interface TRITargetingPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasIncludeDependencies;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool includeDependencies;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
