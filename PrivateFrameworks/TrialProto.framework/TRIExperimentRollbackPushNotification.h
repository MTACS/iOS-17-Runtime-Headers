
@interface TRIExperimentRollbackPushNotification : TRIPBMessage

@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasExperimentId;

+ (id)descriptor;

@end
