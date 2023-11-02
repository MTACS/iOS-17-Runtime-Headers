
@interface VCPLoudnessAnalyzer : NSObject {
    long long  _framePosition;
    struct LkFsMeasure { unsigned int x1; unsigned int x2; long long x3; bool x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; long long x11; long long x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16[30][6]; float *x17; float *x18; float *x19; struct DspLibBiquad {} *x20; struct DspLibBiquad {} *x21; } * _loudnessAnalyzer;
    NSMutableArray * _loudnessResults;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _loudnessSampleBuffer;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _momentaryEnergyValues;
    AVAudioPCMBuffer * _pcmBuffer;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _peakValues;
    struct CAStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } * _processFormat;
    float  _sampleRate;
    unsigned int  _samplesFor100ms;
    struct AUOutputBL { struct CAStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; char *x2; struct AudioBufferList {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _samplesForProcessingBufferList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)finalizeAnalysisAtTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)init;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 timestamp:(struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })arg2;
- (id)results;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { }*)arg1 andSampleBatchSize:(int)arg2;

@end
