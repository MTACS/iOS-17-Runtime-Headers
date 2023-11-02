
@interface _MPCAudioSpectrumAnalyzerStorage : NSObject {
    struct DSPSplitComplex { 
        float *realp; 
        float *imagp; 
    }  _fftBuffer;
    struct OpaqueFFTSetup { } * _fftSetup;
    long long  _halfN;
    float * _intermediateBuffer;
    long long  _log2N;
    long long  _maxNumberOfFrames;
    bool  _processing;
    float  _sampleRate;
}

@property (nonatomic) long long halfN;
@property (nonatomic) long long log2N;
@property (nonatomic) long long maxNumberOfFrames;
@property (nonatomic) float sampleRate;

- (void)_destroyFFTSetup;
- (void)_freeBuffers;
- (void)_prepareBuffers;
- (void)analyzeAudioData:(void*)arg1 numberFrames:(unsigned int)arg2 observers:(id)arg3;
- (void)analyzeFrequencies:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberFrames:(unsigned long long)arg2 observers:(id)arg3;
- (void)dealloc;
- (long long)halfN;
- (id)initWithMaximumNumberOfFrames:(long long)arg1 sampleRate:(float)arg2;
- (long long)log2N;
- (long long)maxNumberOfFrames;
- (float)sampleRate;
- (void)setHalfN:(long long)arg1;
- (void)setLog2N:(long long)arg1;
- (void)setMaxNumberOfFrames:(long long)arg1;
- (void)setSampleRate:(float)arg1;

@end
