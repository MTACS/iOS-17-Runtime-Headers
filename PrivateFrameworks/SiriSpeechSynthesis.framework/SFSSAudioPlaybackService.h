
@interface SFSSAudioPlaybackService : NSObject {
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
    NSCondition * _audioQueueStateCondition;
    bool  _discontinuedDuringPlayback;
    double  _enqueuedSampleCount;
    NSString * _outputRoute;
    unsigned int  _sessionID;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, readonly) struct OpaqueAudioQueue { }*audioQueue;
@property (nonatomic, retain) NSCondition *audioQueueStateCondition;
@property (nonatomic, readonly) bool discontinuedDuringPlayback;
@property (nonatomic, readonly) NSString *outputRoute;
@property (nonatomic) unsigned int sessionID;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (struct OpaqueAudioQueue { }*)audioQueue;
- (id)audioQueueStateCondition;
- (bool)discontinuedDuringPlayback;
- (id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3;
- (void)flushAndStop;
- (void)handleMediaServerReset;
- (id)initWithAudioSessionID:(unsigned int)arg1 asbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
- (bool)isAudioQueueRunning;
- (id)outputRoute;
- (void)pause;
- (void)reset;
- (unsigned int)sessionID;
- (void)setAudioQueueStateCondition:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)signalQueueRunningStateChange;
- (id)start;
- (void)stop;
- (void)waitForAudioQueueStop;
- (void)waitForQueueRunningStateChange;

@end
