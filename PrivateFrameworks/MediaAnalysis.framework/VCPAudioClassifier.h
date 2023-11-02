
@interface VCPAudioClassifier : NSObject {
    SNAudioStreamAnalyzer * _SNAnalyzer;
    unsigned long long  _analysisTypes;
    NSMutableArray * _classifiers;
    NSMutableArray * _classifiers300;
    NSMutableArray * _detectors;
    long long  _framePosition;
    AVAudioPCMBuffer * _pcmBuffer;
    float  _sampleRate;
}

- (void).cxx_destruct;
- (int)finalizeAnalysisAtTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)initWithTypes:(unsigned long long)arg1;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 timestamp:(struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })arg2;
- (id)results;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { }*)arg1 trackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andSampleBatchSize:(int)arg3;

@end
