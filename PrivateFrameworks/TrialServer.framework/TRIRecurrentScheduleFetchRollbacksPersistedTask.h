
@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (nonatomic) bool hasIsRepeatedInstance;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool isRepeatedInstance;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
