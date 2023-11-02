
@interface _DKSunriseSunsetMonitor : _DKMonitor <CLLocationManagerDelegate> {
    int  _authorizationStatus;
    bool  _awaitingLocationAfterDisabledAirplaneMode;
    bool  _enabled;
    NSObject<OS_os_log> * _log;
    CLLocationManager * _manager;
    NSDictionary * _previousDataDictionary;
    struct __SCPreferences { } * _radioPrefs;
    unsigned long long  _updateInterval;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (nonatomic) int authorizationStatus;
@property (nonatomic) bool awaitingLocationAfterDisabledAirplaneMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) CLLocationManager *manager;
@property (nonatomic, retain) NSDictionary *previousDataDictionary;
@property struct __SCPreferences { }*radioPrefs;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long updateInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *updateTimer;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (int)authorizationStatus;
- (bool)awaitingLocationAfterDisabledAirplaneMode;
- (id)contextDictionaryWithGeoAlmanac:(id)arg1 authorizationStatus:(int)arg2;
- (bool)currentSunriseSunsetTimes:(id)arg1 differsFromPreviousTimes:(id)arg2 byInterval:(double)arg3;
- (void)deactivate;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (bool)isAirplaneModeEnabled;
- (bool)isAirplaneModeEnabledWithPreferences:(struct __SCPreferences { }*)arg1;
- (id)loadState;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)log;
- (id)manager;
- (id)previousDataDictionary;
- (struct __SCPreferences { }*)radioPrefs;
- (void)respondToAirplaneModeStatusChanged;
- (void)respondToTimeChange:(id)arg1;
- (void)saveState;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setAwaitingLocationAfterDisabledAirplaneMode:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPreviousDataDictionary:(id)arg1;
- (void)setRadioPrefs:(struct __SCPreferences { }*)arg1;
- (void)setUpdateInterval:(unsigned long long)arg1;
- (void)setUpdateTimer:(id)arg1;
- (void)start;
- (void)stop;
- (void)unprotectedUpdateSunriseSunsetTime:(id)arg1;
- (unsigned long long)updateInterval;
- (id)updateTimer;

@end
