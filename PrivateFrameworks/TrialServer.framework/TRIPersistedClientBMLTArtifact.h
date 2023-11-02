
@interface TRIPersistedClientBMLTArtifact : TRIPBMessage

@property (nonatomic, retain) TRIClientBackgroundMLTask *backgroundMlTask;
@property (nonatomic, retain) TRIPBTimestamp *deploymentDate;
@property (nonatomic) int deploymentType;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) bool hasBackgroundMlTask;
@property (nonatomic) bool hasDeploymentDate;
@property (nonatomic) bool hasDeploymentType;
@property (nonatomic) bool hasDownloadSize;
@property (nonatomic, retain) TRIPBUInt32Array *populationsArray;
@property (nonatomic, readonly) unsigned long long populationsArray_Count;

+ (id)descriptor;

@end
