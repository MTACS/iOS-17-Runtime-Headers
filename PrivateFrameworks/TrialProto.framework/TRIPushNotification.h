
@interface TRIPushNotification : TRIPBMessage

@property (nonatomic, retain) TRIExperimentRollbackPushNotification *experimentNotification;
@property (nonatomic, readonly) int notificationOneOfCase;
@property (nonatomic, retain) TRIRolloutDeploymentPushNotification *rolloutNotification;

+ (id)descriptor;

@end
