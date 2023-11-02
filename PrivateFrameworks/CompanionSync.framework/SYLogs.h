
@interface SYLogs : NSObject

+ (void)initialize;
+ (id)logFolder;
+ (bool)shouldDisplaySyncErrorMessage;
+ (bool)shouldDumpIDSOnSyncError;
+ (bool)shouldLogBubblesToAggD;

@end
