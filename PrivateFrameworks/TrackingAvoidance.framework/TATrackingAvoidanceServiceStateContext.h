
@interface TATrackingAvoidanceServiceStateContext : NSObject {
    bool  _airplaneMode;
    bool  _allowSimulatedEvents;
    bool  _batterySaverMode;
    bool  _deviceUnlockedSinceBoot;
    bool  _hasKoreaCountryCode;
    bool  _highThermalState;
    bool  _locationServicesEnabled;
    bool  _locationSimulationInProgress;
    bool  _restartRequired;
    bool  _serviceEnabled;
    bool  _userLocationInsideKorea;
}

@property bool airplaneMode;
@property bool allowSimulatedEvents;
@property bool batterySaverMode;
@property bool deviceUnlockedSinceBoot;
@property bool hasKoreaCountryCode;
@property bool highThermalState;
@property bool locationServicesEnabled;
@property bool locationSimulationInProgress;
@property bool restartRequired;
@property bool serviceEnabled;
@property bool userLocationInsideKorea;

- (bool)airplaneMode;
- (bool)allowSimulatedEvents;
- (bool)batterySaverMode;
- (bool)deviceUnlockedSinceBoot;
- (bool)hasKoreaCountryCode;
- (bool)highThermalState;
- (id)init;
- (bool)locationServicesEnabled;
- (bool)locationSimulationInProgress;
- (bool)restartRequired;
- (bool)serviceEnabled;
- (void)setAirplaneMode:(bool)arg1;
- (void)setAllowSimulatedEvents:(bool)arg1;
- (void)setBatterySaverMode:(bool)arg1;
- (void)setDeviceUnlockedSinceBoot:(bool)arg1;
- (void)setHasKoreaCountryCode:(bool)arg1;
- (void)setHighThermalState:(bool)arg1;
- (void)setLocationServicesEnabled:(bool)arg1;
- (void)setLocationSimulationInProgress:(bool)arg1;
- (void)setRestartRequired:(bool)arg1;
- (void)setServiceEnabled:(bool)arg1;
- (void)setUserLocationInsideKorea:(bool)arg1;
- (bool)userLocationInsideKorea;

@end
