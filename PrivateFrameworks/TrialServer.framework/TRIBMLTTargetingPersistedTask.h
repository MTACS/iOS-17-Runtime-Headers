
@interface TRIBMLTTargetingPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *backgroundMlTaskId;
@property (nonatomic, copy) NSString *bmltBatchNotificationId;
@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasBackgroundMlTaskId;
@property (nonatomic) bool hasBmltBatchNotificationId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasIncludeDependencies;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool hasTriggerEvent;
@property (nonatomic) bool includeDependencies;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) int triggerEvent;

+ (id)descriptor;

@end
