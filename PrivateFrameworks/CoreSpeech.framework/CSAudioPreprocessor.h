
@interface CSAudioPreprocessor : NSObject <CSBeepCancellerDelegate, CSVoiceTriggerAwareZeroFilterDelegate> {
    CSBeepCanceller * _beepCanceller;
    <CSAudioPreprocessorDelegate> * _delegate;
    int  _numChannels;
    float  _sampleRate;
    CSAudioSampleRateConverter * _upsampler;
    CSAudioZeroCounter * _zeroCounter;
    CSVoiceTriggerAwareZeroFilter * _zeroFilter;
}

@property (nonatomic, retain) CSBeepCanceller *beepCanceller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAudioPreprocessorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int numChannels;
@property (nonatomic) float sampleRate;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSAudioSampleRateConverter *upsampler;
@property (nonatomic, retain) CSAudioZeroCounter *zeroCounter;
@property (nonatomic, retain) CSVoiceTriggerAwareZeroFilter *zeroFilter;

- (void).cxx_destruct;
- (id)_fetchCurrentMetrics;
- (bool)_isNarrowBand:(float)arg1;
- (void)_reportMetrics;
- (id)beepCanceller;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)delegate;
- (void)flush;
- (id)initWithSampleRate:(float)arg1 withNumberOfChannels:(int)arg2;
- (int)numChannels;
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;
- (void)reportMetricsForSiriRequestWithUUID:(id)arg1;
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(bool)arg2 voiceTriggerInfo:(id)arg3;
- (float)sampleRate;
- (void)setBeepCanceller:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumChannels:(int)arg1;
- (void)setSampleRate:(float)arg1;
- (void)setUpsampler:(id)arg1;
- (void)setZeroCounter:(id)arg1;
- (void)setZeroFilter:(id)arg1;
- (id)upsampler;
- (void)willBeepWithRecordRoute:(id)arg1 playbackRoute:(id)arg2;
- (id)zeroCounter;
- (id)zeroFilter;
- (void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3;

@end
