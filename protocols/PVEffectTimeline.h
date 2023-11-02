
@protocol PVEffectTimeline

@required

- (struct { long long x1; int x2; unsigned int x3; long long x4; })componentTimeFromTimelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })componentTimeRangeFromTimelineTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)forceDisableBuildAnimation;
- (bool)forceDisableLoop;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })loopTimeOverride;
- (bool)loopTimeOverrideEnabled;
- (PVTimelineMarker *)posterFrameMarker;
- (void)setForceDisableBuildAnimation:(bool)arg1;
- (void)setForceDisableLoop:(bool)arg1;
- (void)setLoopTimeOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopTimeOverrideEnabled:(bool)arg1;
- (void)setUseLocalLoopTime:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineDuration;
- (unsigned int)timelineDurationInFrames;
- (double)timelineDurationInSeconds;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineFrameDuration;
- (double)timelineFrameRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineLastFrame;
- (NSArray *)timelineMarkers;
- (NSArray *)timelineMarkersOfType:(int)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineTimeFromComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timelineTimeRangeFromComponentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)useLocalLoopTime;

@end
