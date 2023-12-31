
@interface MSPerformanceLogger : MSASModelBase

+ (void)nukeCompletionBlock:(id /* block */)arg1;
+ (id)sharedLogger;

- (void)_logSqliteErrorLine:(int)arg1;
- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;
- (bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;
- (id)init;
- (void)startOperation:(id)arg1 itemGUID:(id)arg2;
- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;
- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(id /* block */)arg3;

@end
