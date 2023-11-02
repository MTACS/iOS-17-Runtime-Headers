
@interface PTCinematographyRefinement : NSObject {
    unsigned long long  _firstIndexToLookForTransitions;
    NSMutableArray * _frames;
    NSMutableDictionary * _globals;
    PTCinematographyRefinementOptions * _options;
    unsigned long long  _recordingState;
    NSNumber * _refinedFrameNumber;
    bool  _shouldReturnAllCachedFrames;
    PTCinematographyFrameDetectionSmoother * _smoother;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeDelayForRefinement;
}

@property (nonatomic) unsigned long long firstIndexToLookForTransitions;
@property (nonatomic, retain) NSMutableArray *frames;
@property (nonatomic, retain) NSMutableDictionary *globals;
@property (nonatomic, copy) PTCinematographyRefinementOptions *options;
@property (nonatomic) unsigned long long recordingState;
@property (nonatomic, retain) NSNumber *refinedFrameNumber;
@property (nonatomic) bool shouldReturnAllCachedFrames;
@property (nonatomic, retain) PTCinematographyFrameDetectionSmoother *smoother;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeDelayForRefinement;

- (void).cxx_destruct;
- (void)_endSmoothedFrames;
- (id)_extractFramesReturningAll:(bool)arg1;
- (id)_extractFramesToIndex:(unsigned long long)arg1;
- (unsigned long long)_framesIndexForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_logRackFocusPullToFrameAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 label:(id)arg3;
- (void)_moveAlongSmoothedFrames;
- (bool)_needSnapshotForPolicy:(unsigned long long)arg1;
- (void)_performLinearRackFocusPullToFrameAtIndex:(unsigned long long)arg1 fromIndex:(long long)arg2;
- (void)_performRackFocusPullToFrameAtIndex:(unsigned long long)arg1;
- (void)_performRackFocusPullsStartingAtIndex:(unsigned long long)arg1;
- (void)_updateGlobalsWithSnapshot:(id)arg1;
- (void)_updateRecordingStateForSnapshot:(id)arg1;
- (void)addFrames:(id)arg1;
- (void)endOfFrames;
- (unsigned long long)firstIndexToLookForTransitions;
- (id)frames;
- (id)globalCinematographyDictionary;
- (id)globals;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (unsigned long long)recordingState;
- (id)refinedFrameNumber;
- (id)refinedFrames;
- (void)setFirstIndexToLookForTransitions:(unsigned long long)arg1;
- (void)setFrames:(id)arg1;
- (void)setGlobals:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRecordingState:(unsigned long long)arg1;
- (void)setRefinedFrameNumber:(id)arg1;
- (void)setShouldReturnAllCachedFrames:(bool)arg1;
- (void)setSmoother:(id)arg1;
- (bool)shouldReturnAllCachedFrames;
- (id)smoother;
- (void)startRecording;
- (void)stopRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeDelayForRefinement;

@end
