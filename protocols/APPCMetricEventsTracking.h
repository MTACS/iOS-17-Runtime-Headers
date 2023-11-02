
@protocol APPCMetricEventsTracking

@required

- (NSDate *)adResponseTimestamp;
- (void)didPlacePlaceholder;
- (void)didReceiveAdResponse;
- (void)didReceivePrerollVideoResponse;
- (void)didReplacePlaceholder;
- (void)didRequestPrerollVideo;
- (NSDate *)placeholderPlacedTimestamp;
- (NSDate *)prerollAdRequestTimestamp;
- (NSDate *)prerollAdResponseTimestamp;
- (NSDate *)replacedPlaceholderTimestamp;
- (void)sendAnalyticsEventFor:(long long)arg1 interval:(double)arg2 networkType:(unsigned long long)arg3 placementType:(unsigned long long)arg4 failed:(bool)arg5;

@end
