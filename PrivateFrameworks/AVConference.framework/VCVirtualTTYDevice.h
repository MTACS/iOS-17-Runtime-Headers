
@interface VCVirtualTTYDevice : NSObject <VCAudioIODelegate, VCAudioIOSink, VCAudioIOSource, VCMediaStreamProtocol, VCTextSender> {
    VCAudioIO * _audioIO;
    unsigned int  _audioSessionId;
    struct opaqueCMSimpleQueue { } * _charQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _characterPool;
    int  _clientPid;
    VCAudioPayload * _currentAudioPayload;
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; struct tagVCIndexedBuffer { char *x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; bool x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct AudioBufferList {} *x9; struct AudioBufferList {} *x10; char *x11; int x12; int x13; int x14; int x15; unsigned char x16; int x17; int x18; unsigned int x19; unsigned int x20; struct CMRData { unsigned int x_21_1_1; unsigned int x_21_1_2; struct EVSRFParams { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_21_1_3; } x21; } * _decoder;
    int  _state;
    id  _textStream;
    struct tagVCAudioFrameFormat { 
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
        } format; 
        unsigned int samplesPerFrame; 
    }  _vpioFormat;
    NSObject<VCMediaStreamDelegate> * delegate;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
    int  deviceRole;
    bool  isValid;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  sessionLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property int deviceRole;
@property (readonly) unsigned long long hash;
@property bool isValid;
@property (readonly) Class superclass;

- (bool)canProcessAudio;
- (void)dealloc;
- (id)delegate;
- (int)deviceRole;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;
- (bool)isValid;
- (void)lock;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (void)sendText:(id)arg1;
- (void)serverDidDie;
- (void)setCanProcessAudio:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setIsValid:(bool)arg1;
- (id)setPause:(bool)arg1;
- (bool)setStreamConfig:(id)arg1 withError:(id*)arg2;
- (id)start;
- (id)stop;
- (void)unlock;

@end
