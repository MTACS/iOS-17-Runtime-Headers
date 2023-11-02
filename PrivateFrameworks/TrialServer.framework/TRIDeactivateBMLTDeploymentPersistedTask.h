
@interface TRIDeactivateBMLTDeploymentPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *backgroundMlTaskId;
@property (nonatomic, copy) NSString *bmltBatchNotificationId;
@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasBackgroundMlTaskId;
@property (nonatomic) bool hasBmltBatchNotificationId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasTriggerEvent;
@property (nonatomic) int triggerEvent;

+ (id)descriptor;

@end
