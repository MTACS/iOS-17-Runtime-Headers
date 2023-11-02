
@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    <ATXUpdatePredictionsDelegate> * _delegate;
    <ATXLocationManagerProtocol> * _locationManager;
    NSDate * _now;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic) <ATXUpdatePredictionsDelegate> *delegate;
@property (nonatomic, readonly) <ATXLocationManagerProtocol> *locationManager;
@property (nonatomic, retain) NSDate *now;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)_regionIdentifierForLocationOfInterestType:(long long)arg1;
- (void)_registerNotificationListeners;
- (void)_start;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithLocationManager:(id)arg1 userDefaults:(id)arg2;
- (id)locationManager;
- (void)locationManagerDidEnterRegion:(id)arg1;
- (void)locationManagerDidExitRegion:(id)arg1;
- (id)now;
- (void)setDelegate:(id)arg1;
- (void)setNow:(id)arg1;
- (void)updateMonitoredRegionsIfNecessaryWithReply:(id /* block */)arg1;
- (id)userDefaults;

@end
