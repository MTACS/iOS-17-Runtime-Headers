
@interface CNScript : NSObject {
    PTCinematographyScript * _internalScript;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSArray *addedDetectionTracks;
@property float fNumber;
@property (retain) PTCinematographyScript *internalScript;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (void)loadFromAsset:(id)arg1 changes:(id)arg2 progress:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_initWithInternalScript:(id)arg1;
- (long long)addDetectionTrack:(id)arg1;
- (bool)addUserDecision:(id)arg1;
- (id)addedDetectionTracks;
- (id)baseDecisionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)changes;
- (id)changesTrimmedByTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)decisionAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)decisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 tolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)decisionBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)decisionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)detectionTrackForDecision:(id)arg1;
- (id)detectionTrackForID:(long long)arg1;
- (float)fNumber;
- (id)frameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 tolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)framesInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)internalScript;
- (id)primaryDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)queue;
- (void)reloadWithChanges:(id)arg1;
- (void)removeAllUserDecisions;
- (bool)removeDetectionTrack:(id)arg1;
- (bool)removeUserDecision:(id)arg1;
- (id)secondaryDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFNumber:(float)arg1;
- (void)setInternalScript:(id)arg1;
- (void)setQueue:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeOfTransitionAfterDecision:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeOfTransitionBeforeDecision:(id)arg1;
- (id)userDecisionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
