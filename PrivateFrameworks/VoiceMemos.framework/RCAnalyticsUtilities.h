
@interface RCAnalyticsUtilities : NSObject

+ (void)sendDidCaptureModifyExistingRecording;
+ (void)sendDidCaptureNewRecording;
+ (void)sendDidOpenShareMemoController;
+ (void)sendDidPlaybackVoiceMemo;
+ (void)sendDidShareRecording;
+ (void)sendDidTrimVoiceMemo;
+ (void)sendNewRecordingDuration:(double)arg1;
+ (void)sendReceivedSharedRecording;
+ (void)sendRecordingsCount:(long long)arg1;

@end
