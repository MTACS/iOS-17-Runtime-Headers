
@interface VCSystemAudioCaptureSession : NSObject {
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
    }  _audioBasicDescription;
    VCAudioIO * _audioIO;
    struct opaqueCMSimpleQueue { } * _outputQueue;
    struct opaqueCMSimpleQueue { } * _poolQueue;
    unsigned int  _samplesPerFrame;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateLock;
}

- (void)cleanupQueue:(struct opaqueCMSimpleQueue {}**)arg1;
- (bool)createAudioBufferPool;
- (void)dealloc;
- (id)initWithConfiguration:(struct { int x1; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_2_1_1; unsigned int x_2_1_2; } x2; int x3; int x4; unsigned int x5; int x6; }*)arg1;
- (void)resetAudioBufferPool;
- (bool)setupAudioIOWithConfig:(struct { int x1; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_2_1_1; unsigned int x_2_1_2; } x2; int x3; int x4; unsigned int x5; int x6; }*)arg1;
- (bool)start;
- (bool)stop;

@end
