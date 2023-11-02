
@interface BMCoreAnalyticsEvents : NSObject

+ (id)dictionaryWithAllStreamsEventWritten:(bool)arg1 size:(unsigned int)arg2 streamIdentifier:(id)arg3;
+ (id)dictionaryWithBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3;
+ (id)dictionaryWithCoderUsageByProcess:(id)arg1 className:(id)arg2;
+ (id)dictionaryWithDatavaultByUsageExecutableName:(id)arg1;
+ (id)dictionaryWithDeletionPolicyMetrics:(id)arg1 stream:(id)arg2 numDeleted:(unsigned int)arg3 exception:(bool)arg4;
+ (id)dictionaryWithPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned int)arg3;
+ (id)dictionaryWithUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3;
+ (id)dictionaryWithUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned int)arg3;
+ (void)sendAllStreamsEventWritten:(bool)arg1 size:(unsigned int)arg2 streamIdentifier:(id)arg3;
+ (void)sendBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3;
+ (void)sendCoderUsageWithClassName:(id)arg1;
+ (void)sendDatavaultEntitlementUsage:(id)arg1;
+ (void)sendDeletionPolicyMetrics:(id)arg1 stream:(id)arg2 numDeleted:(unsigned int)arg3 exception:(bool)arg4;
+ (void)sendEvent:(id)arg1 payload:(id)arg2;
+ (void)sendPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned int)arg3;
+ (void)sendUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3;
+ (void)sendUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned int)arg3;

@end
