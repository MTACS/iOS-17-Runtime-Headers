
@interface MPCVocalAttenuationProcessorImplementation : NSObject {
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
    NSObject<OS_dispatch_queue> * _creationQueue;
    bool  _enabled;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _ioBuffer;
    float  _level;
    unsigned int  _maxFrames;
    float  _maxLevel;
    float  _minLevel;
    MPCVocalAttenuationModel * _model;
    long long  _nextContiguousSampleIndex;
    long long  _previousContiguousSampleIndex;
    struct OpaqueAudioComponentInstance { } * _processingAU;
    long long  _state;
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
    }  _timestamp;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) float level;
@property (nonatomic, readonly) float maxLevel;
@property (nonatomic, readonly) float minLevel;
@property (nonatomic, readonly) MPCVocalAttenuationModel *model;
@property (nonatomic, readonly) double renderingLimit;
@property (nonatomic, readonly) double sampleTime;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)_applyAttenuationLevelToAudioUnit;
- (bool)_createAudioUnit:(id*)arg1;
- (bool)_initializeAudioUnit:(id*)arg1;
- (void)_prepareWithModel:(id)arg1 completion:(id /* block */)arg2;
- (bool)_setupAudioUnitWithModel:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithMaxAttenuationLevel:(float)arg1 audioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 maxFrames:(unsigned int)arg3;
- (bool)isAvailable;
- (bool)isCompatibleWithAudioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 maxFrames:(unsigned int)arg2;
- (bool)isEnabled;
- (float)level;
- (float)maxLevel;
- (float)minLevel;
- (id)model;
- (void)prepareWithModel:(id)arg1 completion:(id /* block */)arg2;
- (bool)processAudioBuffer:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 sampleIndex:(long long)arg2 numberFrames:(unsigned int)arg3 error:(id*)arg4;
- (double)renderingLimit;
- (void)resetAudioUnit;
- (double)sampleTime;
- (void)setEnabled:(bool)arg1;
- (void)setLevel:(float)arg1;
- (long long)state;
- (void)tearDownWithCompletion:(id /* block */)arg1;

@end
