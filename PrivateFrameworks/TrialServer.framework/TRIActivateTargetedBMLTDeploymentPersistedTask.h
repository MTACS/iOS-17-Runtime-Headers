
@interface TRIActivateTargetedBMLTDeploymentPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *backgroundMlTaskId;
@property (nonatomic, copy) NSString *bmltBatchNotificationId;
@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *factorPackSetId;
@property (nonatomic) bool hasBackgroundMlTaskId;
@property (nonatomic) bool hasBmltBatchNotificationId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasFactorPackSetId;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
