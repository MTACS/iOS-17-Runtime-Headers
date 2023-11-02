
@interface TRIPersistedNamespaceStatus : TRIPBMessage

@property (nonatomic) bool hasLastFetchWasSuccess;
@property (nonatomic) bool hasLatestNotificationQueryLocalTime;
@property (nonatomic) bool hasNamespaceCompatibilityVersion;
@property (nonatomic) bool hasNamespaceName;
@property (nonatomic) bool lastFetchWasSuccess;
@property (nonatomic, retain) TRIPBTimestamp *latestNotificationQueryLocalTime;
@property (nonatomic) unsigned int namespaceCompatibilityVersion;
@property (nonatomic, copy) NSString *namespaceName;

+ (id)descriptor;

@end
