
@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding> {
    bool  _calculateCrossCorrelationPeak;
    AVAudioDeviceTestProcessingChain * _inputProcessingChain;
    NSArray * _micBufferNumbers;
    NSString * _microphone;
    NSString * _mode;
    long long  _numberOfChannels;
    long long  _outputID;
    long long  _outputMode;
    AVAudioDeviceTestProcessingChain * _outputProcessingChain;
    bool  _parallelCrossCorrelationCalculation;
    long long  _priority;
    bool  _processSequenceAsynchronously;
    bool  _requiresBluetoothOutput;
    NSURL * _stimulusURL;
    float  _volume;
}

@property bool calculateCrossCorrelationPeak;
@property (nonatomic, retain) AVAudioDeviceTestProcessingChain *inputProcessingChain;
@property (nonatomic, retain) NSArray *micBufferNumbers;
@property (nonatomic, retain) NSString *microphone;
@property (retain) NSString *mode;
@property (nonatomic) long long numberOfChannels;
@property (nonatomic) long long outputID;
@property (nonatomic) long long outputMode;
@property (nonatomic, retain) AVAudioDeviceTestProcessingChain *outputProcessingChain;
@property bool parallelCrossCorrelationCalculation;
@property (nonatomic) long long priority;
@property bool processSequenceAsynchronously;
@property bool requiresBluetoothOutput;
@property (nonatomic, retain) NSURL *stimulusURL;
@property (nonatomic) float volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)calculateCrossCorrelationPeak;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inputProcessingChain;
- (id)micBufferNumbers;
- (id)microphone;
- (id)mode;
- (long long)numberOfChannels;
- (long long)outputID;
- (long long)outputMode;
- (id)outputProcessingChain;
- (bool)parallelCrossCorrelationCalculation;
- (long long)priority;
- (bool)processSequenceAsynchronously;
- (bool)requiresBluetoothOutput;
- (void)setCalculateCrossCorrelationPeak:(bool)arg1;
- (void)setInputProcessingChain:(id)arg1;
- (void)setMicBufferNumbers:(id)arg1;
- (void)setMicrophone:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setNumberOfChannels:(long long)arg1;
- (void)setOutputID:(long long)arg1;
- (void)setOutputMode:(long long)arg1;
- (void)setOutputProcessingChain:(id)arg1;
- (void)setParallelCrossCorrelationCalculation:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setProcessSequenceAsynchronously:(bool)arg1;
- (void)setRequiresBluetoothOutput:(bool)arg1;
- (void)setStimulusURL:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)stimulusURL;
- (float)volume;

@end
