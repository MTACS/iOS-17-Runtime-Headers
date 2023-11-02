
@interface _LTPlaybackService : NSObject {
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
    }  _asbd;
    struct OpaqueAudioQueue { } * _audioQueue;
    long long  _state;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _stateChangeCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _waitForStateChange;
}

@property (nonatomic, readonly) long long state;

- (void)dealloc;
- (id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3;
- (void)flushAndStop;
- (void)handleMediaServerReset;
- (id)initWithContext:(id)arg1 ASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
- (bool)isAudioQueueRunning;
- (void)reset;
- (void)signalQueueRunningStateChanged;
- (id)start;
- (long long)state;
- (void)stop;
- (void)waitForAudioQueueStop;

@end
