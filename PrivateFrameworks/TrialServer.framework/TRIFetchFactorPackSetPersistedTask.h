
@interface TRIFetchFactorPackSetPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *bmltId;
@property (nonatomic, retain) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int construct;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *factorPackSetId;
@property (nonatomic) bool hasBmltId;
@property (nonatomic) bool hasCapabilityModifier;
@property (nonatomic) bool hasConstruct;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasFactorPackSetId;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
