
@interface ATXMissedNotificationRankingFeedbackProcessingPipeline : NSObject {
    <BMBookmark> * _bookmark;
    NSString * _path;
    ATXEngagementTrackedMissedNotificationRankingBiomeStream * _trackedMNRStream;
}

- (void).cxx_destruct;
- (bool)_fileExistsAtPath:(id)arg1;
- (void)_readBookmarkFromPath;
- (void)_writeBookmarkToPath;
- (id)init;
- (id)initWithBookmark:(id)arg1 path:(id)arg2 trackedMNRStream:(id)arg3;
- (void)logMetrics;
- (void)logMetricsForRanking:(id)arg1;
- (void)logMetricsWithXPCActivity:(id)arg1;

@end
