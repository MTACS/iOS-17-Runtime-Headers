
@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage

@property (nonatomic, retain) TRIPersistedAllocationCommon *common;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasCommon;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, retain) NSMutableArray *namespaceArray;
@property (nonatomic, readonly) unsigned long long namespaceArray_Count;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
