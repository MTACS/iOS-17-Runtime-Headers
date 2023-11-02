
@interface MPCProcessAudioTap : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <MPCProcessAudioTapDelegate> * _delegate;
    bool  _enabled;
    struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; } * _monoAudioBuffer;
    unsigned int  _numberOfChannels;
    unsigned int  _numberOfFrames;
    int  _pid;
    struct OpaqueAudioQueue { } * _processingQueue;
    unsigned int  _sampleRate;
}

@property (nonatomic) <MPCProcessAudioTapDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) unsigned int numberOfChannels;
@property (nonatomic) unsigned int numberOfFrames;
@property (nonatomic, readonly) unsigned int sampleRate;

- (void).cxx_destruct;
- (void)_createProcessTapWithNumberOfFrames:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)_destroyProcessTap;
- (void)dealloc;
- (id)delegate;
- (id)initWithPID:(int)arg1 refreshRate:(id)arg2 delegate:(id)arg3;
- (id)initWithPID:(int)arg1 refreshRate:(id)arg2 numberOfChannels:(unsigned int)arg3 delegate:(id)arg4;
- (id)initWithRefreshRate:(id)arg1 delegate:(id)arg2;
- (bool)isEnabled;
- (void)mediaServerDidDie:(id)arg1;
- (void)mediaServerDidRestart:(id)arg1;
- (unsigned int)numberOfChannels;
- (unsigned int)numberOfFrames;
- (unsigned int)sampleRate;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNumberOfFrames:(unsigned int)arg1;
- (void)setupNotifications;
- (void)start;
- (void)stop;
- (void)tearDownNotifications;

@end
