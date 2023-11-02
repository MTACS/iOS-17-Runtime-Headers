
@interface AVHapticSequence : NSObject {
    unsigned long long  _activeChannel;
    unsigned long long  _channelCount;
    double  _duration;
    unsigned long long  _eventBehavior;
    bool  _isMuted;
    double  _lastStartTime;
    bool  _loopIsEnabled;
    float  _loopLength;
    float  _playbackRate;
    AVHapticPlayer * _player;
    unsigned long long  _seqID;
}

@property unsigned long long activeChannel;
@property (readonly) unsigned long long channelCount;
@property (copy) id /* block */ completionHandler;
@property double duration;
@property unsigned long long eventBehavior;
@property bool isMuted;
@property double lastStartTime;
@property bool loopingEnabled;
@property float playbackRate;
@property AVHapticPlayer *player;
@property unsigned long long seqID;

- (void).cxx_destruct;
- (bool)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3;
- (unsigned long long)activeChannel;
- (bool)cancelAndReturnError:(id*)arg1;
- (unsigned long long)channelCount;
- (id /* block */)completionHandler;
- (void)dealloc;
- (double)duration;
- (bool)earlyUnduckAudioAtTime:(double)arg1 error:(id*)arg2;
- (unsigned long long)eventBehavior;
- (unsigned long long)getChannelCount;
- (id)init;
- (id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (id)initWithEvents:(id)arg1 player:(id)arg2 error:(id*)arg3;
- (bool)isMuted;
- (double)lastStartTime;
- (bool)loopingEnabled;
- (bool)pauseAtTime:(double)arg1 error:(id*)arg2;
- (bool)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3;
- (float)playbackRate;
- (id)player;
- (bool)prepareToPlayAndReturnError:(id*)arg1;
- (bool)resetAtTime:(double)arg1 error:(id*)arg2;
- (bool)resumeAtTime:(double)arg1 error:(id*)arg2;
- (bool)seekToTime:(double)arg1 error:(id*)arg2;
- (unsigned long long)seqID;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventBehavior:(unsigned long long)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setLastStartTime:(double)arg1;
- (bool)setLoopLength:(float)arg1 error:(id*)arg2;
- (void)setLoopingEnabled:(bool)arg1;
- (bool)setLoopingEnabled:(bool)arg1 error:(id*)arg2;
- (bool)setParameter:(unsigned long long)arg1 value:(float)arg2 channel:(unsigned long long)arg3 atTime:(double)arg4 error:(id*)arg5;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSeqID:(unsigned long long)arg1;
- (bool)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)stopAtTime:(double)arg1 error:(id*)arg2;

@end
