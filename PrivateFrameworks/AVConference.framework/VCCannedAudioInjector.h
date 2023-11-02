
@interface VCCannedAudioInjector : VCObject {
    int  _assetType;
    struct tagVCCannedAudioInjectorConverterProc { 
        struct OpaqueCMBlockBuffer {} *blockBuffer; 
        struct AudioBufferList { 
            unsigned int mNumberBuffers; 
            struct AudioBuffer { 
                unsigned int mNumberChannels; 
                unsigned int mDataByteSize; 
                void *mData; 
            } mBuffers[1]; 
        } audioBufferList; 
        struct OpaqueCMBlockBuffer {} *previousBlockBuffer; 
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
        } streamDesc; 
    }  _audioConverterProc;
    unsigned int  _audioSampleCount;
    VCCannedAVSync * _avSync;
    NSString * _cannedMoviePath;
    bool  _forceVoiceActive;
    bool  _fromBeginning;
    bool  _isReadyToInject;
    bool  _isSharedAVSync;
    unsigned int  _loopCount;
    double  _loopLength;
    unsigned int  _maxLoopCount;
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
    }  _outputFormat;
    bool  _playbackComplete;
    int  _position;
    struct opaqueVCAudioBufferList { } * _sampleBuffer;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _samplesConditional;
    unsigned int  _samplesInLoop;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _samplesMutex;
}

@property bool isReadyToInject;

+ (id)defaultAudioFileNameWithFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })internalAssetFormatWithFileFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
+ (bool)isAudioAvailable:(id)arg1 fileName:(id)arg2;
+ (int)setupReader:(id)arg1 forAsset:(id)arg2 assetAudioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 trackOutput:(id*)arg4;

- (int)allocateSampleBufferWithTrackOutput:(id)arg1 assetAudioFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2 sampleBuffer:(struct opaqueVCAudioBufferList {}**)arg3;
- (void)cleanupAudioConverterProc;
- (void)completeSetupWithSampleBuffer:(struct opaqueVCAudioBufferList {}**)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithConfig:(id)arg1;
- (bool)isReadyToInject;
- (int)loadAudioSamples;
- (int)loadEncodedAudioSamples;
- (int)loadRawAudioSamples;
- (int)loadSamplesFromTrackOutput:(id)arg1 audioConverter:(struct OpaqueAudioConverter { }*)arg2 audioBuffer:(struct opaqueVCAudioBufferList { }*)arg3;
- (void)parseMediaTracksForAsset:(id)arg1;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 audioConverter:(struct OpaqueAudioConverter { }*)arg2 audioBuffer:(struct opaqueVCAudioBufferList { }*)arg3;
- (void)reportInjectorInitWithPath:(id)arg1;
- (void)setAudioConverterProcAudioBufferList:(const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 blockBuffer:(struct OpaqueCMBlockBuffer { }*)arg2;
- (void)setIsReadyToInject:(bool)arg1;
- (int)setupAVSyncWithStartHostTime:(double)arg1 loopLength:(double)arg2;
- (bool)setupAssetInjectionWithConfig:(id)arg1;
- (int)setupAudioConverterWithAssetFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 audioConverter:(struct OpaqueAudioConverter {}**)arg2;
- (int)setupSineInjectionWithConfig:(id)arg1;

@end
