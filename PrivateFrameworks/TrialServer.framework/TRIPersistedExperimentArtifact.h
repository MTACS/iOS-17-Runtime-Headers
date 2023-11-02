
@interface TRIPersistedExperimentArtifact : TRIPBMessage

@property (nonatomic) int cloudKitContainer;
@property (nonatomic, retain) TRIPBTimestamp *deploymentDate;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSData *encodedExperimentDefinition;
@property (nonatomic, copy) NSString *encodedExperimentDefinitionSignature;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasCloudKitContainer;
@property (nonatomic) bool hasDeploymentDate;
@property (nonatomic) bool hasDeploymentEnvironment;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasEncodedExperimentDefinition;
@property (nonatomic) bool hasEncodedExperimentDefinitionSignature;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasInternalBuildOnly;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasProjectId;
@property (nonatomic) bool hasPublicCertificate;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTeamId;
@property (nonatomic) bool hasType;
@property (nonatomic) bool internalBuildOnly;
@property (nonatomic, retain) TRIPBUInt32Array *namespaceCompatibilityVersionsArray;
@property (nonatomic, readonly) unsigned long long namespaceCompatibilityVersionsArray_Count;
@property (nonatomic, retain) NSMutableArray *namespacesArray;
@property (nonatomic, readonly) unsigned long long namespacesArray_Count;
@property (nonatomic) int priority;
@property (nonatomic) int projectId;
@property (nonatomic, copy) NSData *publicCertificate;
@property (nonatomic) int status;
@property (nonatomic, copy) NSString *teamId;
@property (nonatomic) int type;

+ (id)descriptor;

@end
