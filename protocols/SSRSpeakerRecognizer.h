
@protocol SSRSpeakerRecognizer <NSObject>

@required

- (void)endAudio;
- (id)initWithContext:(SSRSpeakerRecognitionContext *)arg1 delegate:(id <SSRSpeakerRecognizerDelegate>)arg2;
- (NSDictionary *)lastScoreCard;
- (void)processAudioData:(NSData *)arg1 numSamples:(unsigned long long)arg2;
- (void)resetWithContext:(SSRSpeakerRecognitionContext *)arg1;

@end
