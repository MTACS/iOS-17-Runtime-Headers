
@interface TRISubscribeChannelPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic, retain) TRIPBTimestamp *startTimestamp;

+ (id)descriptor;

@end
