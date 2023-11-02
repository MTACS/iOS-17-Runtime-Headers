
@interface PTCinematographyExistingTrack : PTCinematographyTrack

- (id)_initWithExistingTrack:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectionAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detectionInFrame:(id)arg1;
- (id)detectionNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detectionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithDetectionType:(unsigned long long)arg1 trackIdentifier:(long long)arg2 groupIdentifier:(long long)arg3;
- (bool)isDiscrete;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)trackType;

@end
