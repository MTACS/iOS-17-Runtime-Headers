
@interface TRIRetargetAllPersistedTask : TRIPBMessage

@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
