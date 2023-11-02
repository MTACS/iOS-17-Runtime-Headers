
@interface AVMusicTrack : NSObject {
    void * _impl;
}

@property (nonatomic, retain) AVAudioUnit *destinationAudioUnit;
@property (nonatomic) unsigned int destinationMIDIEndpoint;
@property (nonatomic) double lengthInBeats;
@property (nonatomic) double lengthInSeconds;
@property (nonatomic) struct _AVBeatRange { double x1; double x2; } loopRange;
@property (getter=isLoopingEnabled, nonatomic) bool loopingEnabled;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) long long numberOfLoops;
@property (nonatomic) double offsetTime;
@property (getter=isSoloed, nonatomic) bool soloed;
@property (nonatomic, readonly) unsigned long long timeResolution;
@property bool usesAutomatedParameters;

- (void)addEvent:(id)arg1 atBeat:(double)arg2;
- (void)clearEventsInRange:(struct _AVBeatRange { double x1; double x2; })arg1;
- (void)copyAndMergeEventsInRange:(struct _AVBeatRange { double x1; double x2; })arg1 fromTrack:(id)arg2 mergeAtBeat:(double)arg3;
- (void)copyEventsInRange:(struct _AVBeatRange { double x1; double x2; })arg1 fromTrack:(id)arg2 insertAtBeat:(double)arg3;
- (id)createEventIterator;
- (void)cutEventsInRange:(struct _AVBeatRange { double x1; double x2; })arg1;
- (void)dealloc;
- (id)destinationAudioUnit;
- (unsigned int)destinationMIDIEndpoint;
- (void)doAddAUPresetEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddExtendedNoteOnEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddExtendedTempoEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddMIDIChannelEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddMIDIMetaEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddMIDINoteEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddMIDISysexEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddParameterEvent:(id)arg1 atBeat:(double)arg2;
- (void)doAddUserEvent:(id)arg1 atBeat:(double)arg2;
- (void)enumerateEventsInRange:(struct _AVBeatRange { double x1; double x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)index;
- (id)initWithImpl:(struct MusicTrackImpl { struct OpaqueMusicTrack {} *x1; id x2; bool x3; unsigned int x4; }*)arg1;
- (bool)isLoopingEnabled;
- (bool)isMuted;
- (bool)isSoloed;
- (double)lengthInBeats;
- (double)lengthInSeconds;
- (struct _AVBeatRange { double x1; double x2; })loopRange;
- (void)moveEventsInRange:(struct _AVBeatRange { double x1; double x2; })arg1 byAmount:(double)arg2;
- (long long)numberOfLoops;
- (double)offsetTime;
- (void)setDestinationAudioUnit:(id)arg1;
- (void)setDestinationMIDIEndpoint:(unsigned int)arg1;
- (void)setLengthInBeats:(double)arg1;
- (void)setLengthInSeconds:(double)arg1;
- (void)setLoopRange:(struct _AVBeatRange { double x1; double x2; })arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setOffsetTime:(double)arg1;
- (void)setSoloed:(bool)arg1;
- (void)setUsesAutomatedParameters:(bool)arg1;
- (void)setUsesAutomatedParameters:(bool)arg1;
- (unsigned long long)timeResolution;
- (struct OpaqueMusicTrack { }*)track;
- (bool)usesAutomatedParameters;
- (bool)usesAutomatedParameters;

@end
