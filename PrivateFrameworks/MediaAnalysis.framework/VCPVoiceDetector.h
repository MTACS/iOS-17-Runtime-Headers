
@interface VCPVoiceDetector : NSObject {
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
    }  _audioStream;
    NSDictionary * _model;
    NSMutableArray * _musicDetections;
    int  _sampleBatchSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackStart;
    NSMutableArray * _utteranceDetections;
    bool  _voiceActivity;
    NSMutableArray * _voiceDetections;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _voiceStart;
}

@property (retain) NSMutableArray *voiceDetections;

+ (id)detector;

- (void).cxx_destruct;
- (void)addDetectionFromTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 toTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 result:(id)arg3;
- (id)audioFormatRequirements;
- (int)finalizeAnalysisAtTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)init;
- (int)loadModel;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 timestamp:(struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })arg2;
- (id)results;
- (void)setVoiceDetections:(id)arg1;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { }*)arg1 andSampleBatchSize:(int)arg2;
- (id)voiceDetections;

@end
