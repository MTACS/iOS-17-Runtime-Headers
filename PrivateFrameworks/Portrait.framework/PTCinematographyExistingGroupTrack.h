
@interface PTCinematographyExistingGroupTrack : PTCinematographyExistingTrack {
    NSArray * _trackDecisions;
}

@property (nonatomic, readonly) NSArray *trackDecisions;

- (void).cxx_destruct;
- (id)_calculateTrackDecisions;
- (id)_initWithExistingGroupTrack:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectionAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detectionInFrame:(id)arg1;
- (id)initWithDetectionType:(unsigned long long)arg1 groupIdentifier:(long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)trackDecisions;
- (id)trackDecisionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
