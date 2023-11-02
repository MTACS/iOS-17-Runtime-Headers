
@interface TRIRotateSubjectIdPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic) bool forceUpdate;
@property (nonatomic) bool hasDeviceId;
@property (nonatomic) bool hasForceUpdate;
@property (nonatomic) bool hasNextRotationTimestamp;
@property (nonatomic, retain) TRIPBTimestamp *nextRotationTimestamp;

+ (id)descriptor;

@end
