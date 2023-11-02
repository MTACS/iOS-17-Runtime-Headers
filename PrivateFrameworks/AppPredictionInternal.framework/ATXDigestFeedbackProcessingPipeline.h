
@interface ATXDigestFeedbackProcessingPipeline : NSObject {
    <BMBookmark> * _bookmark;
    ATXNotificationDigestFeedbackLogger * _feedbackLogger;
    NSString * _path;
    ATXEngagementTrackedDigestBiomeStream * _trackedDigestStream;
}

- (void).cxx_destruct;
- (bool)_fileExistsAtPath:(id)arg1;
- (void)_readBookmarkFromPath;
- (void)_writeBookmarkToPath;
- (id)init;
- (id)initWithBookmark:(id)arg1 path:(id)arg2 trackedDigestStream:(id)arg3;
- (id)initWithBookmark:(id)arg1 path:(id)arg2 trackedDigestStream:(id)arg3 digestFeedbackLogger:(id)arg4;
- (void)logFeedbackForDigest:(id)arg1;
- (void)logMetrics;
- (void)logMetricsForDigest:(id)arg1;
- (void)logMetricsWithXPCActivity:(id)arg1;

@end
