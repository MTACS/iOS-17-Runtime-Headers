
@interface AVAudioSequencer : NSObject {
    void * _impl;
}

@property (nonatomic) double currentPositionInBeats;
@property (nonatomic) double currentPositionInSeconds;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) float rate;
@property (nonatomic, readonly) AVMusicTrack *tempoTrack;
@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (double)beatsForHostTime:(unsigned long long)arg1 error:(id*)arg2;
- (double)beatsForSeconds:(double)arg1;
- (void)cleanTracks;
- (id)createAndAppendTrack;
- (double)currentPositionInBeats;
- (double)currentPositionInSeconds;
- (id)dataWithSMPTEResolution:(long long)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)getTempoTrack;
- (unsigned long long)hostTimeForBeats:(double)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAudioEngine:(id)arg1;
- (id)initWithImpl:(void*)arg1;
- (bool)isPlaying;
- (bool)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)numberOfTracks;
- (void)prepareToPlay;
- (float)rate;
- (bool)removeTrack:(id)arg1;
- (void)reverseEvents;
- (double)secondsForBeats:(double)arg1;
- (void)setCurrentPositionInBeats:(double)arg1;
- (void)setCurrentPositionInSeconds:(double)arg1;
- (void)setRate:(float)arg1;
- (void)setTempoTrack:(id)arg1;
- (void)setTrackArray:(id)arg1;
- (void)setUserCallback:(id /* block */)arg1;
- (void)setupTrackArray;
- (void)setupTracks;
- (bool)startAndReturnError:(id*)arg1;
- (void)stop;
- (id)tempoTrack;
- (id)trackArray;
- (id)tracks;
- (id)userInfo;
- (bool)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(bool)arg3 error:(id*)arg4;

@end
