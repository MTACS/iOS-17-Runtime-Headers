
@interface TRIPersistedClientRolloutArtifact : TRIPBMessage

@property (nonatomic, retain) TRIPBTimestamp *deploymentDate;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) bool hasDeploymentDate;
@property (nonatomic) bool hasDownloadSize;
@property (nonatomic) bool hasRollout;
@property (nonatomic, retain) TRIPBUInt32Array *populationsArray;
@property (nonatomic, readonly) unsigned long long populationsArray_Count;
@property (nonatomic, retain) TRIClientRollout *rollout;

+ (id)descriptor;

@end
