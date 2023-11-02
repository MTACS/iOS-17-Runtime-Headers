
@interface EARClientSilenceFeatures : NSObject {
    unsigned long long  _inferenceTime;
    double  _processedAudioMs;
    double  _silenceDurationMs;
    double  _silenceFramesCountMs;
    double  _silencePosterior;
    double  _silenceProbability;
}

@property (nonatomic) unsigned long long inferenceTime;
@property (nonatomic) double processedAudioMs;
@property (nonatomic) double silenceDurationMs;
@property (nonatomic) double silenceFramesCountMs;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double silenceProbability;

- (unsigned long long)inferenceTime;
- (id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 silencePosterior:(double)arg4 processedAudioMs:(double)arg5;
- (id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 silencePosterior:(double)arg4 processedAudioMs:(double)arg5 inferenceTime:(unsigned long long)arg6;
- (double)processedAudioMs;
- (void)setInferenceTime:(unsigned long long)arg1;
- (void)setProcessedAudioMs:(double)arg1;
- (void)setSilenceDurationMs:(double)arg1;
- (void)setSilenceFramesCountMs:(double)arg1;
- (void)setSilencePosterior:(double)arg1;
- (void)setSilenceProbability:(double)arg1;
- (double)silenceDurationMs;
- (double)silenceFramesCountMs;
- (double)silencePosterior;
- (double)silenceProbability;

@end
