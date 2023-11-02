
@interface TRIRolloutTargetingPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasIncludeDependencies;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool hasTriggerEvent;
@property (nonatomic) bool includeDependencies;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) int triggerEvent;

+ (id)descriptor;

@end
