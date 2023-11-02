
@interface TRIActivateTreatmentPersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (nonatomic, retain) TRIPBTimestamp *endTimestamp;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasCapabilityModifier;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasEndTimestamp;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasRequiresTreatmentInstallation;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool hasTaskOptions;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic) bool requiresTreatmentInstallation;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPBTimestamp *startTimestamp;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic, retain) TRITaskOptions *taskOptions;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
