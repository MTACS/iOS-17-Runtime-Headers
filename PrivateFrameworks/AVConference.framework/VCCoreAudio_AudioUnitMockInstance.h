
@interface VCCoreAudio_AudioUnitMockInstance : VCObject {
    bool  _audioSessionIDSet;
    bool  _bufferFrameSizeSet;
    unsigned int  _enableInputIO;
    unsigned int  _enableOutputIO;
    double  _hostTime;
    struct AudioBufferList { 
        unsigned int mNumberBuffers; 
        struct AudioBuffer { 
            unsigned int mNumberChannels; 
            unsigned int mDataByteSize; 
            void *mData; 
        } mBuffers[1]; 
    }  _inputBuffer;
    struct AURenderCallbackStruct { 
        int (*inputProc)(); 
        void *inputProcRefCon; 
    }  _inputCallback;
    double  _inputSampleTime;
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
    }  _inputStreamFormat;
    float  _ioBufferDuration;
    bool  _isInitialized;
    bool  _isRunning;
    id /* block */  _mutedSpeechActivityListener;
    struct AudioBufferList { 
        unsigned int mNumberBuffers; 
        struct AudioBuffer { 
            unsigned int mNumberChannels; 
            unsigned int mDataByteSize; 
            void *mData; 
        } mBuffers[1]; 
    }  _renderBuffer;
    struct AURenderCallbackStruct { 
        int (*inputProc)(); 
        void *inputProcRefCon; 
    }  _renderCallback;
    double  _renderSampleTime;
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
    }  _renderStreamFormat;
    double  _timebaseHostTimeConversionRatio;
}

@property (nonatomic) bool audioSessionIDSet;
@property (nonatomic) bool bufferFrameSizeSet;
@property (nonatomic, readonly) unsigned int enableInputIO;
@property (nonatomic, readonly) unsigned int enableOutputIO;
@property (nonatomic) bool isInitialized;
@property (nonatomic) bool isRunning;

- (bool)audioSessionIDSet;
- (bool)bufferFrameSizeSet;
- (void)dealloc;
- (unsigned int)enableInputIO;
- (unsigned int)enableOutputIO;
- (bool)generateMutedTalkerNotification:(unsigned int)arg1;
- (int)getEnableIOWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int*)arg3;
- (int)getIOBufferDurationWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int*)arg3;
- (int)getInputCallbackWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int*)arg3;
- (int)getMaximumMediadataByteSizeWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int*)arg3;
- (int)getRenderCallbackWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int*)arg3;
- (int)getStreamFormatWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int*)arg3;
- (id)init;
- (bool)isInitialized;
- (bool)isRunning;
- (void)resetBuffer:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 format:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2;
- (void)runAudioCallback;
- (void)runAudioCallbackWithSampleCount:(unsigned int)arg1 timeGap:(double)arg2;
- (void)setAudioSessionIDSet:(bool)arg1;
- (void)setBufferFrameSizeSet:(bool)arg1;
- (int)setEnableIOWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int)arg3;
- (int)setIOBufferDurationWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int)arg3;
- (int)setInputCallbackWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int)arg3;
- (void)setIsInitialized:(bool)arg1;
- (void)setIsRunning:(bool)arg1;
- (int)setMutedTalkerNotificiationHandlerWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int)arg3;
- (int)setRenderCallbackWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int)arg3;
- (int)setStreamFormatWithScope:(unsigned int)arg1 data:(const void*)arg2 dataSize:(unsigned int)arg3;
- (void)setupDefaultFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;

@end
