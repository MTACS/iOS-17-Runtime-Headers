
@interface TRIPersistedExperimentFactorsState : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
