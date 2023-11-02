
@interface SSRVoiceActivityDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    SSRSpeakerRecognitionContext * _context;
    _EARDefaultServerEndpointFeatures * _defSepFeats;
    <SSRVoiceActivityDetectorDelegate> * _delegate;
    EARCaesuraSilencePosteriorGenerator * _earSpg;
    bool  _endpointReported;
    _EAREndpointer * _hybridClassifier;
    unsigned long long  _numConsecutiveNonSilenceFrames;
    unsigned long long  _numSamplesProcessed;
    long long  _segmentStartPointSampleCount;
    NSObject<OS_dispatch_queue> * _spgQueue;
    bool  _startpointReported;
}

@property (nonatomic, retain) SSRSpeakerRecognitionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _EARDefaultServerEndpointFeatures *defSepFeats;
@property (nonatomic) <SSRVoiceActivityDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EARCaesuraSilencePosteriorGenerator *earSpg;
@property (nonatomic) bool endpointReported;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _EAREndpointer *hybridClassifier;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) long long segmentStartPointSampleCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *spgQueue;
@property (nonatomic) bool startpointReported;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeSPGWithContext:(id)arg1;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (id)context;
- (id)defSepFeats;
- (id)delegate;
- (id)earSpg;
- (void)endAudio;
- (bool)endpointReported;
- (id)hybridClassifier;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (unsigned long long)numSamplesProcessed;
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)resetWithContext:(id)arg1;
- (long long)segmentStartPointSampleCount;
- (void)setContext:(id)arg1;
- (void)setDefSepFeats:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEarSpg:(id)arg1;
- (void)setEndpointReported:(bool)arg1;
- (void)setHybridClassifier:(id)arg1;
- (void)setNumSamplesProcessed:(unsigned long long)arg1;
- (void)setSegmentStartPointSampleCount:(long long)arg1;
- (void)setSpgQueue:(id)arg1;
- (void)setStartpointReported:(bool)arg1;
- (id)spgQueue;
- (bool)startpointReported;

@end
