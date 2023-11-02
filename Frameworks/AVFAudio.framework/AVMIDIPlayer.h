
@interface AVMIDIPlayer : NSObject {
    void * _impl;
}

@property (nonatomic) double currentPosition;
@property (nonatomic, readonly) double duration;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) float rate;

- (double)beatsForHostTime:(unsigned long long)arg1;
- (double)currentPosition;
- (void)dealloc;
- (void)destroyBase;
- (double)duration;
- (void)finalize;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (struct MIDIPlayerImpl { struct OpaqueAUGraph {} *x1; struct OpaqueMusicPlayer {} *x2; struct OpaqueMusicSequence {} *x3; double x4; id /* block */ x5; id x6; }*)impl;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (bool)isPlaying;
- (void)play:(id /* block */)arg1;
- (void)prepareToPlay;
- (float)rate;
- (void)setCurrentPosition:(double)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

@end
