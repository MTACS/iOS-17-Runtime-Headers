
@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>

- (int)_linearBucketAtInterval:(double)arg1 value:(double)arg2 max:(double)arg3;
- (id)_playerForAnnouncement:(id)arg1;
- (struct ANAnalyticsAssistantAudioData { unsigned long long x1; double x2; })audioDataForAnnouncement:(id)arg1;
- (long long)boundGroupCount:(long long)arg1;
- (long long)bucketFromDuration:(double)arg1;
- (long long)bucketFromReceiveTime:(double)arg1;
- (long long)bucketFromSize:(long long)arg1;
- (struct ANAnalyticsAssistantSenderData { unsigned long long x1; int x2; unsigned long long x3; unsigned long long x4; })senderDataForAnnouncement:(id)arg1;

@end
