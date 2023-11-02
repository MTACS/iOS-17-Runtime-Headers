
@interface TRIActivateTargetedRolloutDeploymentPersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *factorPackSetId;
@property (nonatomic) bool hasCapabilityModifier;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasFactorPackSetId;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
