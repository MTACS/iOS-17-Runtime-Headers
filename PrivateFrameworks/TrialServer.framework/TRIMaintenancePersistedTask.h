
@interface TRIMaintenancePersistedTask : TRIPBMessage

@property (nonatomic) bool hasRetryCount;
@property (nonatomic) int retryCount;

+ (id)descriptor;

@end
