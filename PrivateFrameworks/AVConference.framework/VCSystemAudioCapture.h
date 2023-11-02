
@interface VCSystemAudioCapture : VCObject {
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
    }  _audioBasicDescriptionAudioCapture;
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
    }  _audioBasicDescriptionAudioQueue;
    struct opaqueVCAudioBufferList { } * _audioBufferAppendList;
    struct opaqueVCAudioBufferList { } * _audioBufferOutputList;
    struct { struct OpaqueAudioQueue {} *x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; struct AudioQueueBuffer {} *x3[10]; unsigned int x4; int x5; } * _audioRecorderQueue;
    VCCannedAudioInjector * _cannedAudioInjector;
    double  _conversionRatio;
    bool  _firstAudioBufferReceived;
    double  _hostTime;
    unsigned int  _samplesPerFrame;
    void * _sinkContext;
    int (* _sinkProc;
    double  _startHostTime;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateLock;
    struct tagVCSystemAudioCaptureTapSettings { 
        unsigned int tapType; 
        union { 
            int audioProcessIdToTap; 
            unsigned int sessionTypeToTap; 
        } ; 
        struct __CFString {} *captureContext; 
        unsigned int source; 
    }  _tapSettings;
    unsigned int  _timestamp;
}

+ (unsigned int)audioTapSessionTypeForInternalSessionType:(unsigned int)arg1;
+ (bool)isValidConfiguration:(struct { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_1_1_1; unsigned int x_1_1_2; } x1; void *x2; int (*x3)(); struct tagVCSystemAudioCaptureTapSettings { unsigned int x_4_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct __CFString {} *x_4_1_3; unsigned int x_4_1_4; } x4; }*)arg1;
+ (id)newAudioTapWithCaptureContext:(struct __CFString { }*)arg1 audioFormat:(id)arg2;
+ (id)newAudioTapWithProcessID:(int)arg1 audioFormat:(id)arg2;
+ (id)newAudioTapWithSessionType:(unsigned int)arg1 audioFormat:(id)arg2;

- (void)dealloc;
- (int)getQueueState;
- (id)initWithConfiguration:(struct { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_1_1_1; unsigned int x_1_1_2; } x1; void *x2; int (*x3)(); struct tagVCSystemAudioCaptureTapSettings { unsigned int x_4_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct __CFString {} *x_4_1_3; unsigned int x_4_1_4; } x4; }*)arg1;
- (id)newAudioTapWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)setQueueState:(int)arg1;
- (void)setupCannedAudioInjection;
- (bool)start;
- (bool)stop;

@end
