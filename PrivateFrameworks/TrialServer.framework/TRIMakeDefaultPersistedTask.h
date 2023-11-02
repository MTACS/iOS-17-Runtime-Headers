
@interface TRIMakeDefaultPersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasCapabilityModifier;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
