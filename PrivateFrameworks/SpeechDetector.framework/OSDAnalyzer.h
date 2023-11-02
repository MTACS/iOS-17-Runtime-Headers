
@interface OSDAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate, LipMovementVADDelegate> {
    EARCaesuraSilencePosteriorGenerator * _caesuraSPG;
    <OSDAnalyzerDelegate> * _delegate;
    bool  _endOfSpeechDetected;
    NSObject<OS_dispatch_queue> * _lipMovementQueue;
    SDLipMovementVAD * _lipMovementVAD;
    unsigned long long  _numConsecutiveNonSilenceFrames;
    NSDictionary * _osdContext;
    OSDFeatures * _osdFeatures;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _startOfSpeechDetected;
}

@property (nonatomic, retain) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <OSDAnalyzerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endOfSpeechDetected;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lipMovementQueue;
@property (nonatomic, retain) SDLipMovementVAD *lipMovementVAD;
@property (nonatomic, retain) NSDictionary *osdContext;
@property (nonatomic, retain) OSDFeatures *osdFeatures;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool startOfSpeechDetected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)addFaceTrackingData:(id)arg1 atMachAbsTime:(unsigned long long)arg2;
- (id)caesuraSPG;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (id)delegate;
- (void)didUpdateVisualSpeechProbability:(double)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)endAudio;
- (bool)endOfSpeechDetected;
- (id)getCurrentOSDFeatures;
- (long long)getFrameDurationMs;
- (id)initWithConfigFile:(id)arg1 sampleRate:(unsigned long long)arg2 context:(id)arg3 queue:(id)arg4 delegate:(id)arg5;
- (id)lipMovementQueue;
- (id)lipMovementVAD;
- (id)osdContext;
- (id)osdFeatures;
- (id)queue;
- (void)resetForNewRequestWithContext:(id)arg1;
- (void)setCaesuraSPG:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndOfSpeechDetected:(bool)arg1;
- (void)setLipMovementQueue:(id)arg1;
- (void)setLipMovementVAD:(id)arg1;
- (void)setOsdContext:(id)arg1;
- (void)setOsdFeatures:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartOfSpeechDetected:(bool)arg1;
- (void)setupLipMovementVADWithModelPath:(id)arg1;
- (bool)startOfSpeechDetected;

@end
