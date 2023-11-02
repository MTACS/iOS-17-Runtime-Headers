
@interface CSVoiceTriggerAwareZeroFilter : NSObject {
    <CSVoiceTriggerAwareZeroFilterDelegate> * _delegate;
    unsigned long long  _numSamplesProcessed;
    float  _sampleRate;
    unsigned long long  _vtEndInSampleCount;
    CSAudioZeroFilter * _zeroFilter;
}

@property (nonatomic) <CSVoiceTriggerAwareZeroFilterDelegate> *delegate;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) float sampleRate;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic, retain) CSAudioZeroFilter *zeroFilter;

- (void).cxx_destruct;
- (id)delegate;
- (void)flush;
- (id)init;
- (id)metrics;
- (unsigned long long)numSamplesProcessed;
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2;
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(bool)arg2 voiceTriggerInfo:(id)arg3;
- (float)sampleRate;
- (void)setDelegate:(id)arg1;
- (void)setNumSamplesProcessed:(unsigned long long)arg1;
- (void)setSampleRate:(float)arg1;
- (void)setVtEndInSampleCount:(unsigned long long)arg1;
- (void)setZeroFilter:(id)arg1;
- (unsigned long long)vtEndInSampleCount;
- (id)zeroFilter;

@end
