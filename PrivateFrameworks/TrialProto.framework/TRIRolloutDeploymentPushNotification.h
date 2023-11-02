
@interface TRIRolloutDeploymentPushNotification : TRIPBMessage

@property (nonatomic, retain) TRIPBTimestamp *deploymentDate;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) bool hasDeploymentDate;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasNotificationProcessingPolicy;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic, retain) TRINotificationProcessingPolicy *notificationProcessingPolicy;
@property (nonatomic, copy) NSString *rolloutId;

+ (id)descriptor;

@end
