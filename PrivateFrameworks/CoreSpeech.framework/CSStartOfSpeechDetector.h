
@interface CSStartOfSpeechDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    EARCaesuraSilencePosteriorGenerator * _caesuraSPG;
    NSString * _configFile;
    unsigned long long  _curSpeechFrames;
    <CSStartOfSpeechDetectorDelegate> * _delegate;
    unsigned long long  _minSpeechFrames;
    unsigned long long  _numLeadingFrames;
    float  _prevAudioProcessedMs;
    unsigned long long  _samplingRate;
    NSObject<OS_dispatch_queue> * _sosQueue;
    NSObject<OS_dispatch_queue> * _spgQueue;
    bool  _startDetected;
}

@property (nonatomic, retain) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (nonatomic, retain) NSString *configFile;
@property (nonatomic) unsigned long long curSpeechFrames;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSStartOfSpeechDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long minSpeechFrames;
@property (nonatomic) unsigned long long numLeadingFrames;
@property (nonatomic) float prevAudioProcessedMs;
@property (nonatomic) unsigned long long samplingRate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sosQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *spgQueue;
@property (nonatomic) bool startDetected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)caesuraSPG;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (id)configFile;
- (unsigned long long)curSpeechFrames;
- (id)delegate;
- (void)endAudio;
- (id)initWithConfig:(id)arg1 samplingRate:(unsigned long long)arg2 minSpeechFrames:(unsigned long long)arg3 numLeadingFrames:(unsigned long long)arg4 delegate:(id)arg5;
- (unsigned long long)minSpeechFrames;
- (unsigned long long)numLeadingFrames;
- (float)prevAudioProcessedMs;
- (void)resetForNewRequest;
- (unsigned long long)samplingRate;
- (void)setCaesuraSPG:(id)arg1;
- (void)setConfigFile:(id)arg1;
- (void)setCurSpeechFrames:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinSpeechFrames:(unsigned long long)arg1;
- (void)setNumLeadingFrames:(unsigned long long)arg1;
- (void)setPrevAudioProcessedMs:(float)arg1;
- (void)setSamplingRate:(unsigned long long)arg1;
- (void)setSosQueue:(id)arg1;
- (void)setSpgQueue:(id)arg1;
- (void)setStartDetected:(bool)arg1;
- (id)sosQueue;
- (id)spgQueue;
- (bool)startDetected;

@end
