
@protocol VCAudioSessionDelegate <VCServerDelegate>

@optional

- (void)didSessionBeginQuietTime;
- (void)didSessionEnd;
- (void)didSessionEndQuietTime;
- (void)didSessionPause;
- (void)didSessionResume;
- (void)didSessionSampleRateChange;
- (void)didSessionStop;

@end
