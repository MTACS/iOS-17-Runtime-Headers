
@interface AdvancedPatternPlayer : PatternPlayerBase <CHHapticAdvancedPatternPlayerExtended> {
    id /* block */  _completionHandler;
    double  _loopEnd;
    double  _seekOffset;
    AVHapticSequence * _sequence;
    int  _state;
}

@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isMuted;
@property bool loopEnabled;
@property double loopEnd;
@property (readonly) bool paused;
@property float playbackRate;
@property (readonly) bool running;
@property double seekOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)cancelAndReturnError:(id*)arg1;
- (void)clearExternalResources:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (bool)doResumeAtTime:(double)arg1 error:(id*)arg2;
- (void)doSetMute:(bool)arg1;
- (bool)doStartFromPausedAtTime:(double)arg1 error:(id*)arg2;
- (bool)doStartFromStoppedAtTime:(double)arg1 error:(id*)arg2;
- (bool)earlyUnduckAudioAtTime:(double)arg1 error:(id*)arg2;
- (void)finishInit;
- (id)init;
- (id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(bool)arg3 error:(id*)arg4;
- (id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id*)arg3;
- (id)initWithVibePatternDictionary:(id)arg1 engine:(id)arg2 error:(id*)arg3;
- (bool)isMuted;
- (bool)loopEnabled;
- (double)loopEnd;
- (double)patternDuration;
- (bool)pauseAtTime:(double)arg1 error:(id*)arg2;
- (bool)paused;
- (float)playbackRate;
- (void)resetState;
- (bool)resumeAtTime:(double)arg1 error:(id*)arg2;
- (bool)running;
- (bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (double)seekOffset;
- (bool)seekToOffset:(double)arg1 error:(id*)arg2;
- (bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setLoopEnabled:(bool)arg1;
- (void)setLoopEnd:(double)arg1;
- (void)setPaused;
- (void)setPlaybackRate:(float)arg1;
- (void)setRunning;
- (void)setSeekOffset:(double)arg1;
- (bool)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)startAtTime:(double)arg1 error:(id*)arg2;
- (bool)stopAtTime:(double)arg1 error:(id*)arg2;

@end
