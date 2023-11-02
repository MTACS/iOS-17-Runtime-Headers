
@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic) bool hasNetworkBehavior;
@property (nonatomic) bool hasRollbacksOnly;
@property (nonatomic, retain) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic) bool rollbacksOnly;

+ (id)descriptor;

@end
