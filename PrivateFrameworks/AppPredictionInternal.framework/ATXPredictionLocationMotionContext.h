
@interface ATXPredictionLocationMotionContext : ATXPredictionContextDomain {
    bool  _canPredictClipsGivenRecentMotion;
    long long  _coarseGeohash;
    ATXLocationOfInterest * _currentLOI;
    double  _distanceFromGymOfCurrentLocationInMeters;
    double  _distanceFromHomeOfCurrentLocationInMeters;
    double  _distanceFromSchoolOfCurrentLocationInMeters;
    double  _distanceFromWorkOfCurrentLocationInMeters;
    long long  _geohash;
    long long  _largeGeohash;
    bool  _locationEnabled;
    long long  _motionType;
    ATXLocationOfInterest * _previousLOI;
}

@property (nonatomic, readonly) bool canPredictClipsGivenRecentMotion;
@property (nonatomic, readonly) long long coarseGeohash;
@property (nonatomic, readonly) ATXLocationOfInterest *currentLOI;
@property (nonatomic, readonly) double distanceFromGymOfCurrentLocationInMeters;
@property (nonatomic, readonly) double distanceFromHomeOfCurrentLocationInMeters;
@property (nonatomic, readonly) double distanceFromSchoolOfCurrentLocationInMeters;
@property (nonatomic, readonly) double distanceFromWorkOfCurrentLocationInMeters;
@property (nonatomic, readonly) long long geohash;
@property (nonatomic, readonly) long long largeGeohash;
@property (nonatomic, readonly) bool locationEnabled;
@property (nonatomic, readonly) long long motionType;
@property (nonatomic, readonly) ATXLocationOfInterest *previousLOI;

- (void).cxx_destruct;
- (long long)_atxMotionTypeFromPBMotionType:(int)arg1;
- (int)_pbMotionTypeFromATXMotionType:(long long)arg1;
- (id)_unarchiveCLLocation:(id)arg1;
- (bool)canPredictClipsGivenRecentMotion;
- (long long)coarseGeohash;
- (id)currentLOI;
- (id)description;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (id)encodeAsProto;
- (long long)geohash;
- (id)initWithCurrentLOI:(id)arg1 previousLOI:(id)arg2 motionType:(long long)arg3 currentLocation:(id)arg4 locationEnabled:(bool)arg5 distanceFromHome:(double)arg6 distanceFromWork:(double)arg7 distanceFromSchool:(double)arg8 distanceFromGym:(double)arg9 canPredictClipsGivenRecentMotion:(bool)arg10;
- (id)initWithCurrentLOI:(id)arg1 previousLOI:(id)arg2 motionType:(long long)arg3 geohash:(long long)arg4 coarseGeohash:(long long)arg5 largeGeohash:(long long)arg6 locationEnabled:(bool)arg7 distanceFromHome:(double)arg8 distanceFromWork:(double)arg9 distanceFromSchool:(double)arg10 distanceFromGym:(double)arg11 canPredictClipsGivenRecentMotion:(bool)arg12;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionLocationMotionContext:(id)arg1;
- (id)jsonDict;
- (long long)largeGeohash;
- (bool)locationEnabled;
- (long long)motionType;
- (id)previousLOI;
- (id)proto;

@end
