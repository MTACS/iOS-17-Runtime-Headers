
@interface PTCinematographyFixedFocusTrack : PTCinematographyTrack {
    PTCinematographyDetection * _detection;
}

@property (nonatomic, readonly) PTCinematographyDetection *detection;
@property (nonatomic, readonly) float focusDistance;

- (void).cxx_destruct;
- (id)_asCinematographyDictionary;
- (id)_calculateTimeRanges;
- (id)_fixedFocusDetectionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)_initWithFixedFocusTrack:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detection;
- (id)detectionAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detectionInFrame:(id)arg1;
- (id)detectionNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned long long)detectionType;
- (id)detectionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (float)focusDistance;
- (id)initWithDetection:(id)arg1;
- (id)initWithFocusDistance:(float)arg1;
- (bool)isDiscrete;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)trackType;

@end
