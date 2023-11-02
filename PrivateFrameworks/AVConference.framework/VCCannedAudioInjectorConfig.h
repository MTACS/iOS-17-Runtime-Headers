
@interface VCCannedAudioInjectorConfig : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _audioFormat;
    NSString * _fileName;
    bool  _forceVoiceActive;
    bool  _fromBeginning;
    unsigned int  _loopCount;
    double  _loopLength;
    NSString * _path;
    id  _reportingAgent;
    double  _sineWaveAmplitude;
    unsigned int  _sineWaveFrequencyHz;
    double  _startHostTime;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } audioFormat;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) bool forceVoiceActive;
@property (nonatomic) bool fromBeginning;
@property (nonatomic) unsigned int loopCount;
@property (nonatomic) double loopLength;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) id reportingAgent;
@property (nonatomic) double sineWaveAmplitude;
@property (nonatomic) unsigned int sineWaveFrequencyHz;
@property (nonatomic) double startHostTime;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioFormat;
- (void)dealloc;
- (id)description;
- (id)fileName;
- (bool)forceVoiceActive;
- (bool)fromBeginning;
- (id)init;
- (bool)isValid;
- (unsigned int)loopCount;
- (double)loopLength;
- (id)path;
- (id)reportingAgent;
- (void)setAudioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setFileName:(id)arg1;
- (void)setForceVoiceActive:(bool)arg1;
- (void)setFromBeginning:(bool)arg1;
- (void)setLoopCount:(unsigned int)arg1;
- (void)setLoopLength:(double)arg1;
- (void)setPath:(id)arg1;
- (void)setReportingAgent:(id)arg1;
- (void)setSineWaveAmplitude:(double)arg1;
- (void)setSineWaveFrequencyHz:(unsigned int)arg1;
- (void)setStartHostTime:(double)arg1;
- (double)sineWaveAmplitude;
- (unsigned int)sineWaveFrequencyHz;
- (double)startHostTime;

@end
