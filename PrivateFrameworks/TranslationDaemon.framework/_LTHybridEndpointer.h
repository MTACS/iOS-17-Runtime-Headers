
@interface _LTHybridEndpointer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    _LTHybridEndpointerAssetInfo * _asset;
    long long  _audioBitDepth;
    double  _clampedSFLatencyMsForClientLag;
    double  _clientLagThresholdMs;
    _LTTranslationContext * _context;
    <_LTSpeechTranslationDelegate> * _delegate;
    bool  _didEndpoint;
    NSDictionary * _endpointerThreshold;
    NSObject<OS_dispatch_queue> * _featureQueue;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _samplingRate;
    NSNumber * _sourceDisconnectedEndpointerThreshold;
    _EAREndpointer * _sourceEndpointer;
    _LTServerEndpointerFeatures * _sourceEndpointerFeatures;
    NSNumber * _sourceEndpointerThreshold;
    EARCaesuraSilencePosteriorGenerator * _spg;
    NSNumber * _targetDisconnectedEndpointerThreshold;
    _EAREndpointer * _targetEndpointer;
    _LTServerEndpointerFeatures * _targetEndpointerFeatures;
    NSNumber * _targetEndpointerThreshold;
    bool  _useDefaultServerFeaturesOnClientLag;
}

@property (nonatomic, readonly) long long audioBitDepth;
@property (nonatomic) double clampedSFLatencyMsForClientLag;
@property (nonatomic) double clientLagThresholdMs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *endpointerThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long samplingRate;
@property (readonly) Class superclass;
@property (nonatomic) bool useDefaultServerFeaturesOnClientLag;

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)arg1;
- (long long)audioBitDepth;
- (double)clampedSFLatencyMsForClientLag;
- (double)clientLagThresholdMs;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (bool)didEndpointWithFeatures:(id)arg1 silenceFeatures:(id)arg2 endpointer:(id)arg3;
- (void)endAudio;
- (id)endpointerThreshold;
- (id)init;
- (long long)samplingRate;
- (void)setClampedSFLatencyMsForClientLag:(double)arg1;
- (void)setClientLagThresholdMs:(double)arg1;
- (void)setEndpointerThreshold:(id)arg1;
- (void)setServerEndpointerFeatures:(id)arg1 withLocale:(id)arg2;
- (void)setUseDefaultServerFeaturesOnClientLag:(bool)arg1;
- (void)startEndpointingWithContext:(id)arg1 delegate:(id)arg2;
- (bool)useDefaultServerFeaturesOnClientLag;

@end
