
@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, retain) NSMutableArray *factorPackAssetIdsArray;
@property (nonatomic, readonly) unsigned long long factorPackAssetIdsArray_Count;
@property (nonatomic) bool hasCapabilityModifier;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasNamespaceName;
@property (nonatomic) bool hasNotificationKey;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic, copy) NSString *namespaceName;
@property (nonatomic, copy) NSString *notificationKey;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) NSMutableArray *rolloutFactorNamesArray;
@property (nonatomic, readonly) unsigned long long rolloutFactorNamesArray_Count;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic, retain) NSMutableArray *treatmentAssetIndexesArray;
@property (nonatomic, readonly) unsigned long long treatmentAssetIndexesArray_Count;

+ (id)descriptor;

@end
