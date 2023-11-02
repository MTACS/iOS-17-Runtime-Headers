
@interface TVRCFindingSessionData : NSObject {
    double  _endingProximityMeasurement;
    NSDate * _firstMeasurementTime;
    bool  _gotToHere;
    long long  _numberOfGotCloserRegionTransitions;
    long long  _numberOfGotFartherRegionTransitions;
    bool  _remoteIsConnectedToATV;
    NSDate * _sessionEndTime;
    NSDate * _sessionStartTime;
    double  _startingProximityMeasurement;
    double  _timeToHere;
}

@property (nonatomic) double endingProximityMeasurement;
@property (nonatomic, retain) NSDate *firstMeasurementTime;
@property (nonatomic) bool gotToHere;
@property (nonatomic) long long numberOfGotCloserRegionTransitions;
@property (nonatomic) long long numberOfGotFartherRegionTransitions;
@property (nonatomic) bool remoteIsConnectedToATV;
@property (nonatomic, retain) NSDate *sessionEndTime;
@property (nonatomic, retain) NSDate *sessionStartTime;
@property (nonatomic) double startingProximityMeasurement;
@property (nonatomic) double timeToHere;

- (void).cxx_destruct;
- (double)endingProximityMeasurement;
- (id)firstMeasurementTime;
- (bool)gotToHere;
- (long long)numberOfGotCloserRegionTransitions;
- (long long)numberOfGotFartherRegionTransitions;
- (bool)remoteIsConnectedToATV;
- (id)sessionEndTime;
- (id)sessionStartTime;
- (void)setEndingProximityMeasurement:(double)arg1;
- (void)setFirstMeasurementTime:(id)arg1;
- (void)setGotToHere:(bool)arg1;
- (void)setNumberOfGotCloserRegionTransitions:(long long)arg1;
- (void)setNumberOfGotFartherRegionTransitions:(long long)arg1;
- (void)setRemoteIsConnectedToATV:(bool)arg1;
- (void)setSessionEndTime:(id)arg1;
- (void)setSessionStartTime:(id)arg1;
- (void)setStartingProximityMeasurement:(double)arg1;
- (void)setTimeToHere:(double)arg1;
- (double)startingProximityMeasurement;
- (double)timeToHere;

@end
