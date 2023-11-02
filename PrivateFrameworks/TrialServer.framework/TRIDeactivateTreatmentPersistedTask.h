
@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool failOnUnrecognizedExperiment;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasFailOnUnrecognizedExperiment;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool hasTriggerEvent;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPBTimestamp *startTimestamp;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) int triggerEvent;

+ (id)descriptor;

@end
