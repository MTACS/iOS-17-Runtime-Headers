
@interface CSSPGEndpointAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    EARCaesuraSilencePosteriorGenerator * _caesuraSPG;
    <CSSPGEndpointAnalyzerDelegate> * _delegate;
    float  _endpointThreshold;
    bool  _hasReported;
    bool  _isAnalyzeMode;
    double  _lastSilencePosterior;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSPGEndpointAnalyzerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float endpointThreshold;
@property (nonatomic) bool hasReported;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnalyzeMode;
@property (nonatomic) double lastSilencePosterior;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)caesuraSPG;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (float)endpointThreshold;
- (long long)getFrameDurationMs;
- (bool)hasReported;
- (id)init;
- (id)initWithAnalyzeMode;
- (id)initWithEndpointThreshold:(float)arg1;
- (bool)isAnalyzeMode;
- (double)lastSilencePosterior;
- (id)queue;
- (void)reset;
- (void)setCaesuraSPG:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointThreshold:(float)arg1;
- (void)setHasReported:(bool)arg1;
- (void)setIsAnalyzeMode:(bool)arg1;
- (void)setLastSilencePosterior:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)silenceDurationEstimateAvailable:(float*)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;
- (void)start;
- (void)stop;

@end
