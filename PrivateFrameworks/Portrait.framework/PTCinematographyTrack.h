
@interface PTCinematographyTrack : NSObject {
    NSString * _cachedTrackIdentifierString;
    unsigned long long  _detectionType;
    long long  _groupIdentifier;
    PTCinematographyScript * _script;
    NSArray * _timeRanges;
    long long  _trackIdentifier;
    bool  _userCreated;
}

@property (nonatomic, readonly) NSString *cachedTrackIdentifierString;
@property (nonatomic, readonly) unsigned long long detectionType;
@property (getter=isDiscrete, nonatomic, readonly) bool discrete;
@property (nonatomic, readonly) long long groupIdentifier;
@property (nonatomic) PTCinematographyScript *script;
@property (nonatomic, readonly) NSArray *timeRanges;
@property (nonatomic, readonly) long long trackIdentifier;
@property (nonatomic, readonly) unsigned long long trackType;
@property (getter=isUserCreated, nonatomic) bool userCreated;

- (void).cxx_destruct;
- (void)_addStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toTimeRanges:(id)arg3;
- (id)_asCinematographyDictionary;
- (id)_asMutableCinematographyDictionary;
- (id)_calculateTimeRanges;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)_initWithTrack:(id)arg1;
- (id)_trackByTrimmingToTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 subtracting:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)cachedTrackIdentifierString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugTrackIdentifierString;
- (id)description;
- (id)detectionAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)detectionInFrame:(id)arg1;
- (id)detectionNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned long long)detectionType;
- (id)detectionsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (long long)groupIdentifier;
- (id)init;
- (id)initWithDetectionType:(unsigned long long)arg1;
- (bool)isDiscrete;
- (bool)isUserCreated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)script;
- (void)setGroupIdentifier:(long long)arg1;
- (void)setScript:(id)arg1;
- (void)setTrackIdentifier:(long long)arg1;
- (void)setUserCreated:(bool)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeRangeCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeRangeEndForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)timeRanges;
- (long long)trackIdentifier;
- (unsigned long long)trackType;

@end
