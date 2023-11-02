
@interface TRISequencePersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIAnyPersistedTask *dependentTask;
@property (nonatomic) bool hasDependentTask;
@property (nonatomic) bool hasTask;
@property (nonatomic, retain) TRIAnyPersistedTask *task;

+ (id)descriptor;

@end
