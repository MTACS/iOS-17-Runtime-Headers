
@interface PTCinematographyCustomTrack : PTCinematographyTrack {
    NSArray * _detections;
}

@property (nonatomic, readonly) NSArray *allDetections;
@property (nonatomic, retain) NSArray *detections;

- (void).cxx_destruct;
- (id)_asCinematographyDictionary;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)_initWithCustomTrack:(id)arg1;
- (id)_trackByTrimmingToTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 subtracting:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)allDetections;
- (void)applyDetectionSmoothing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectionAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detectionInFrame:(id)arg1;
- (id)detectionNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detections;
- (id)detectionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithDetections:(id)arg1;
- (bool)isDiscrete;
- (bool)isUserCreated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDetections:(id)arg1;
- (unsigned long long)trackType;

@end
