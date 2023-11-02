
@interface TAFilterGeneralSettings : NSObject {
    bool  _allowNavGeoHintAsPrivateVehicleHint;
    unsigned long long  _beepOnMoveConsiderationTimeInterval;
    unsigned long long  _beepOnMovePedestrianImmediacyType;
    unsigned long long  _beepOnMoveVehicularImmediacyType;
    double  _capOfReasonableWalkingSpeed;
    double  _durationOfConsideration;
    unsigned long long  _nextPLOIPedestrianImmediacyType;
    unsigned long long  _nextPLOIVehicularImmediacyType;
    double  _thresholdOfLocationRelevance;
    double  _thresholdOfSignificantDistance;
    double  _thresholdOfSignificantDuration;
    unsigned long long  _vehicularImmediacyType;
}

@property (nonatomic, readonly) bool allowNavGeoHintAsPrivateVehicleHint;
@property (nonatomic, readonly) unsigned long long beepOnMoveConsiderationTimeInterval;
@property (nonatomic, readonly) unsigned long long beepOnMovePedestrianImmediacyType;
@property (nonatomic, readonly) unsigned long long beepOnMoveVehicularImmediacyType;
@property (nonatomic, readonly) double capOfReasonableWalkingSpeed;
@property (nonatomic, readonly) double durationOfConsideration;
@property (nonatomic, readonly) unsigned long long nextPLOIPedestrianImmediacyType;
@property (nonatomic, readonly) unsigned long long nextPLOIVehicularImmediacyType;
@property (nonatomic, readonly) double thresholdOfLocationRelevance;
@property (nonatomic, readonly) double thresholdOfSignificantDistance;
@property (nonatomic, readonly) double thresholdOfSignificantDuration;
@property (nonatomic, readonly) unsigned long long vehicularImmediacyType;

- (bool)allowNavGeoHintAsPrivateVehicleHint;
- (unsigned long long)beepOnMoveConsiderationTimeInterval;
- (unsigned long long)beepOnMovePedestrianImmediacyType;
- (unsigned long long)beepOnMoveVehicularImmediacyType;
- (double)capOfReasonableWalkingSpeed;
- (double)durationOfConsideration;
- (id)initWithDefaults;
- (id)initWithDurationOfConsideration:(double)arg1 thresholdOfLocationRelevance:(double)arg2 thresholdOfSignificantDuration:(double)arg3 thresholdOfSignificantDistance:(double)arg4 capOfReasonableWalkingSpeed:(double)arg5 allowNavGeoHintAsPrivateVehicleHint:(bool)arg6 vehicularImmediacyType:(unsigned long long)arg7 beepOnMoveVehicularImmediacyType:(unsigned long long)arg8 beepOnMovePedestrianImmediacyType:(unsigned long long)arg9 nextPLOIVehicularImmediacyType:(unsigned long long)arg10 nextPLOIPedestrianImmediacyType:(unsigned long long)arg11 beepOnMoveConsiderationTimeInterval:(unsigned long long)arg12;
- (id)initWithDurationOfConsiderationOrDefault:(id)arg1 thresholdOfLocationRelevanceOrDefault:(id)arg2 thresholdOfSignificantDurationOrDefault:(id)arg3 thresholdOfSignificantDistanceOrDefault:(id)arg4 capOfReasonableWalkingSpeedOrDefault:(id)arg5 allowNavGeoHintAsPrivateVehicleHintOrDefault:(id)arg6 vehicularImmediacyTypeOrDefault:(id)arg7 beepOnMoveVehicularImmediacyTypeOrDefault:(id)arg8 beepOnMovePedestrianImmediacyTypeOrDefault:(id)arg9 nextPLOIVehicularImmediacyTypeOrDefault:(id)arg10 nextPLOIPedestrianImmediacyTypeOrDefault:(id)arg11 beepOnMoveConsiderationTimeIntervalOrDefault:(id)arg12;
- (unsigned long long)nextPLOIPedestrianImmediacyType;
- (unsigned long long)nextPLOIVehicularImmediacyType;
- (double)thresholdOfLocationRelevance;
- (double)thresholdOfSignificantDistance;
- (double)thresholdOfSignificantDuration;
- (unsigned long long)vehicularImmediacyType;

@end
