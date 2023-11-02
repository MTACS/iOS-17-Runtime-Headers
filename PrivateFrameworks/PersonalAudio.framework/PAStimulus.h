
@interface PAStimulus : NSObject {
    AVAudioFile * _audioFile;
    AVAudioPCMBuffer * _audioPCMBuffer;
    AVAudioPlayerNode * _audioPlayerNode;
    unsigned long long  _bucketCount;
    AVAudioEngine * _engine;
    NSURL * _filePath;
    double  _levelMultiplier;
    double  _rampStep;
    bool  _ramping;
    id /* block */  _stimulusMagnitudesCallback;
    AXDispatchTimer * _timer;
}

@property (nonatomic, retain) AVAudioFile *audioFile;
@property (nonatomic, retain) AVAudioPCMBuffer *audioPCMBuffer;
@property (nonatomic, retain) AVAudioPlayerNode *audioPlayerNode;
@property (nonatomic, retain) AVAudioEngine *engine;
@property (nonatomic, retain) NSURL *filePath;
@property (nonatomic) double levelMultiplier;
@property (nonatomic) double rampStep;
@property (nonatomic, retain) AXDispatchTimer *timer;

+ (id)louderSinStimulus;
+ (id)musicStimulus;
+ (id)sinStimulus;

- (void).cxx_destruct;
- (id)audioFile;
- (id)audioPCMBuffer;
- (id)audioPlayerNode;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)calculateFFTForBuffer:(id)arg1;
- (id)engine;
- (id)filePath;
- (id)initWithFile:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPlaying;
- (double)levelMultiplier;
- (void)play;
- (double)rampStep;
- (void)rampVolumeUp:(bool)arg1;
- (void)registerListener:(id /* block */)arg1 forBucketCount:(unsigned long long)arg2;
- (void)setAudioFile:(id)arg1;
- (void)setAudioPCMBuffer:(id)arg1;
- (void)setAudioPlayerNode:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setLevelMultiplier:(double)arg1;
- (void)setRampStep:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)stop;
- (id)timer;
- (void)unregisterListener;

@end
