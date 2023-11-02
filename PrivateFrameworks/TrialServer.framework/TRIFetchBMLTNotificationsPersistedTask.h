
@interface TRIFetchBMLTNotificationsPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *backgroundMlTaskId;
@property (nonatomic, copy) NSString *bmltBatchNotificationId;
@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasBackgroundMlTaskId;
@property (nonatomic) bool hasBmltBatchNotificationId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
