
@interface TRIFetchRolloutNotificationListPersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIPBTimestamp *earliestTimestamp;
@property (nonatomic) bool hasEarliestTimestamp;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic, retain) NSMutableArray *namespacesArray;
@property (nonatomic, readonly) unsigned long long namespacesArray_Count;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
