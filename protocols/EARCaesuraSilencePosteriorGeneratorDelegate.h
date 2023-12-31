
@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>

@required

- (void)clientSilenceFeaturesAvailable:(EARClientSilenceFeatures *)arg1;

@optional

- (void)silenceDurationEstimateAvailable:(float*)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;

@end
