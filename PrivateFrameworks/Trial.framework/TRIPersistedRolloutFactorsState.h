
@interface TRIPersistedRolloutFactorsState : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic, copy) NSString *rolloutId;

+ (id)descriptor;

@end
