
@interface ATXAppDirectoryLogger : NSObject

- (id)_retrieveAllUnprocessedEvents;
- (id)_retrieveLastLogProcessedDate;
- (id)_retrieveSessionsFromUnprocessedEvents:(id)arg1 lastSessionEndDate:(id*)arg2;
- (void)_storeLastLogProcessedDate:(id)arg1;
- (id)_summarizeSession:(id)arg1;
- (void)_uploadToCoreAnalytics:(id)arg1;
- (void)uploadSummariesToCoreAnalyticsWithActivity:(id)arg1;

@end
