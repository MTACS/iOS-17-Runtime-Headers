
@interface TRIFetchSingleRolloutNotificationPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
