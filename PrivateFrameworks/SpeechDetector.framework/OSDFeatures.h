
@interface OSDFeatures : NSObject {
    unsigned long long  _inferenceTime;
    double  _processedAudioMs;
    double  _silenceDurationMs;
    double  _silenceFramesCountMs;
    double  _silenceProbability;
}

@property (nonatomic, readonly) unsigned long long inferenceTime;
@property (nonatomic, readonly) double processedAudioMs;
@property (nonatomic, readonly) double silenceDurationMs;
@property (nonatomic, readonly) double silenceFramesCountMs;
@property (nonatomic, readonly) double silenceProbability;

// Image: /System/Library/PrivateFrameworks/SpeechDetector.framework/SpeechDetector

- (id)description;
- (unsigned long long)inferenceTime;
- (id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 processedAudioMs:(double)arg4;
- (id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 processedAudioMs:(double)arg4 inferenceTime:(unsigned long long)arg5;
- (double)processedAudioMs;
- (double)silenceDurationMs;
- (double)silenceFramesCountMs;
- (double)silenceProbability;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)dictionary;

@end
