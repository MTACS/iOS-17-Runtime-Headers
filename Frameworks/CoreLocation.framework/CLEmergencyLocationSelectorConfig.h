
@interface CLEmergencyLocationSelectorConfig : NSObject {
    long long  _feature;
    bool  _firstLocationEarlyReturnEnabled;
    double  _firstLocationMaxEarlyReturnHunc;
    double  _firstLocationMaxEarlyReturnVunc;
    double  _firstLocationTimeout;
    CLEmergencyLocationUsabilityCriteria * _firstLocationUsabilityCriteria;
    bool  _firstUpdateEnabled;
    double  _firstUpdateTimeout;
    double  _locationUpdateChangeInAltitudeToSendEarly;
    double  _locationUpdateDistanceMovedToSendEarly;
    double  _locationUpdateHuncReductionToSendEarly;
    double  _locationUpdateMinDelay;
    double  _locationUpdateTimeout;
    CLEmergencyLocationUsabilityCriteria * _locationUpdateUsabilityCriteria;
    double  _locationUpdateVuncReductionToSendEarly;
    bool  _periodicUpdatesEnabled;
}

@property (nonatomic) long long feature;
@property (nonatomic) bool firstLocationEarlyReturnEnabled;
@property (nonatomic) double firstLocationMaxEarlyReturnHunc;
@property (nonatomic) double firstLocationMaxEarlyReturnVunc;
@property (nonatomic) double firstLocationTimeout;
@property (nonatomic, retain) CLEmergencyLocationUsabilityCriteria *firstLocationUsabilityCriteria;
@property (nonatomic) bool firstUpdateEnabled;
@property (nonatomic) double firstUpdateTimeout;
@property (nonatomic) double locationUpdateChangeInAltitudeToSendEarly;
@property (nonatomic) double locationUpdateDistanceMovedToSendEarly;
@property (nonatomic) double locationUpdateHuncReductionToSendEarly;
@property (nonatomic) double locationUpdateMinDelay;
@property (nonatomic) double locationUpdateTimeout;
@property (nonatomic, retain) CLEmergencyLocationUsabilityCriteria *locationUpdateUsabilityCriteria;
@property (nonatomic) double locationUpdateVuncReductionToSendEarly;
@property (nonatomic) bool periodicUpdatesEnabled;

+ (id)featureString:(long long)arg1;

- (void)dealloc;
- (long long)feature;
- (bool)firstLocationEarlyReturnEnabled;
- (double)firstLocationMaxEarlyReturnHunc;
- (double)firstLocationMaxEarlyReturnVunc;
- (double)firstLocationTimeout;
- (id)firstLocationUsabilityCriteria;
- (bool)firstUpdateEnabled;
- (double)firstUpdateTimeout;
- (id)initForFeature:(long long)arg1 withUpdatesEnabled:(bool)arg2;
- (double)locationUpdateChangeInAltitudeToSendEarly;
- (double)locationUpdateDistanceMovedToSendEarly;
- (double)locationUpdateHuncReductionToSendEarly;
- (double)locationUpdateMinDelay;
- (double)locationUpdateTimeout;
- (id)locationUpdateUsabilityCriteria;
- (double)locationUpdateVuncReductionToSendEarly;
- (bool)periodicUpdatesEnabled;
- (void)printConfiguration;
- (void)setDefaultsForSIP;
- (void)setFeature:(long long)arg1;
- (void)setFirstLocationEarlyReturnEnabled:(bool)arg1;
- (void)setFirstLocationMaxEarlyReturnHunc:(double)arg1;
- (void)setFirstLocationMaxEarlyReturnVunc:(double)arg1;
- (void)setFirstLocationTimeout:(double)arg1;
- (void)setFirstLocationUsabilityCriteria:(id)arg1;
- (void)setFirstUpdateEnabled:(bool)arg1;
- (void)setFirstUpdateTimeout:(double)arg1;
- (void)setLocationUpdateChangeInAltitudeToSendEarly:(double)arg1;
- (void)setLocationUpdateDistanceMovedToSendEarly:(double)arg1;
- (void)setLocationUpdateHuncReductionToSendEarly:(double)arg1;
- (void)setLocationUpdateMinDelay:(double)arg1;
- (void)setLocationUpdateTimeout:(double)arg1;
- (void)setLocationUpdateUsabilityCriteria:(id)arg1;
- (void)setLocationUpdateVuncReductionToSendEarly:(double)arg1;
- (void)setPeriodicUpdatesEnabled:(bool)arg1;

@end
