
@interface VCPAudioAnalyzer : NSObject {
    struct AudioBufferList { 
        unsigned int mNumberBuffers; 
        struct AudioBuffer { 
            unsigned int mNumberChannels; 
            unsigned int mDataByteSize; 
            void *mData; 
        } mBuffers[1]; 
    }  _audioBufferList;
    VCPAudioClassifier * _audioClassifier;
    struct AudioTimeStamp { 
        double mSampleTime; 
        unsigned long long mHostTime; 
        double mRateScalar; 
        unsigned long long mWordClockTime; 
        struct SMPTETime { 
            short mSubframes; 
            short mSubframeDivisor; 
            unsigned int mCounter; 
            unsigned int mType; 
            unsigned int mFlags; 
            short mHours; 
            short mMinutes; 
            short mSeconds; 
            short mFrames; 
        } mSMPTETime; 
        unsigned int mFlags; 
        unsigned int mReserved; 
    }  _audioTimestamp;
    int  _bufferedSamples;
    bool  _initialized;
    void * _inputBuffer;
    VCPLoudnessAnalyzer * _loudnessAnalyzer;
    int  _sampleBatchSize;
    VCPSongDetector * _songDetector;
    VCPVoiceDetector * _voiceDetector;
}

- (void).cxx_destruct;
- (int)analyzeAsset:(id)arg1 cancel:(id /* block */)arg2 results:(id*)arg3;
- (int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)audioFormatRequirements;
- (void)dealloc;
- (int)finalizeAnalysisAtTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(bool)arg2;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 timestamp:(struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })arg2;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { }*)arg1 andTrackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)voiceDetections;

@end
