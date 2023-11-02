
@interface CNDetectionTrack : NSObject <NSCopying> {
    PTCinematographyTrack * _internalTrack;
}

@property (readonly) long long detectionGroupID;
@property (readonly) long long detectionID;
@property (readonly) long long detectionType;
@property (getter=isDiscrete, readonly) bool discrete;
@property (retain) PTCinematographyTrack *internalTrack;
@property (getter=isUserCreated, readonly) bool userCreated;

+ (id)_internalFromTracks:(id)arg1;
+ (id)_trackFromInternal:(id)arg1;
+ (id)_tracksFromInternal:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithInternal:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectionAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)detectionGroupID;
- (long long)detectionID;
- (id)detectionNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)detectionType;
- (id)detectionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (unsigned long long)hash;
- (id)internalTrack;
- (bool)isDiscrete;
- (bool)isEqual:(id)arg1;
- (bool)isUserCreated;
- (void)setInternalTrack:(id)arg1;

@end
