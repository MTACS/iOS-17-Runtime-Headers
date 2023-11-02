
@interface PHImageManagerRequestTracer : NSObject

+ (id)_currentTimestampString;
+ (void)_inq_recordRequestID:(long long)arg1;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (void)initialize;
+ (id)recentMessagesSummaryForAssetUUID:(id)arg1;
+ (void)registerRequestID:(int)arg1 withAssetUUID:(id)arg2;
+ (int)requestIDFromTaskIdentifier:(id)arg1;
+ (void)setTracingDisabled:(bool)arg1;
+ (void)traceMessageForRequestID:(int)arg1 message:(id)arg2;

@end
