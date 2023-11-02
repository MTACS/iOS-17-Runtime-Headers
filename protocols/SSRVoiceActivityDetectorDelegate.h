
@protocol SSRVoiceActivityDetectorDelegate <NSObject>

@optional

- (void)SSRVoiceActivityDetector:(SSRVoiceActivityDetector *)arg1 didDetectEndPointAt:(unsigned long long)arg2;
- (void)SSRVoiceActivityDetector:(SSRVoiceActivityDetector *)arg1 didDetectStartPointAt:(unsigned long long)arg2;

@end
