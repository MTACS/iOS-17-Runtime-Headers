
@interface SAMonitoringSession : NSObject <NSSecureCoding> {
    NSDate * _caLastStateTransition;
    CLLocation * _caSeparationLocation;
    NSUUID * _deviceUUID;
    bool  _earlyAirplaneTrigger;
    NSDate * _earlyVehicularStateChangeDate;
    bool  _earlyVehicularTrigger;
    TALocationLite * _firstNotWithYouLocation;
    CLCircularRegion * _geofence;
    unsigned long long  _scenario;
    SAScenarioClassifier * _scenarioClassifier;
    unsigned long long  _state;
    NSDate * _trackedTravelingStartDate;
    TALocationLite * _trackedTravelingStartLocation;
    NSDate * _travelingGeofenceExitDate;
}

@property (nonatomic, retain) NSDate *caLastStateTransition;
@property (nonatomic, retain) CLLocation *caSeparationLocation;
@property (nonatomic, retain) NSUUID *deviceUUID;
@property (nonatomic) bool earlyAirplaneTrigger;
@property (nonatomic, retain) NSDate *earlyVehicularStateChangeDate;
@property (nonatomic) bool earlyVehicularTrigger;
@property (nonatomic, retain) TALocationLite *firstNotWithYouLocation;
@property (nonatomic, retain) CLCircularRegion *geofence;
@property (nonatomic) unsigned long long scenario;
@property (nonatomic, retain) SAScenarioClassifier *scenarioClassifier;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSDate *trackedTravelingStartDate;
@property (nonatomic, retain) TALocationLite *trackedTravelingStartLocation;
@property (nonatomic, retain) NSDate *travelingGeofenceExitDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caLastStateTransition;
- (id)caSeparationLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (id)deviceUUID;
- (bool)earlyAirplaneTrigger;
- (id)earlyVehicularStateChangeDate;
- (bool)earlyVehicularTrigger;
- (void)encodeWithCoder:(id)arg1;
- (id)firstNotWithYouLocation;
- (id)geofence;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1 state:(unsigned long long)arg2 geofence:(id)arg3 scenario:(unsigned long long)arg4 trackedTravelingStartDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)scenario;
- (id)scenarioClassifier;
- (void)setCaLastStateTransition:(id)arg1;
- (void)setCaSeparationLocation:(id)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setEarlyAirplaneTrigger:(bool)arg1;
- (void)setEarlyVehicularStateChangeDate:(id)arg1;
- (void)setEarlyVehicularTrigger:(bool)arg1;
- (void)setFirstNotWithYouLocation:(id)arg1;
- (void)setGeofence:(id)arg1;
- (void)setScenario:(unsigned long long)arg1;
- (void)setScenarioClassifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTrackedTravelingStartDate:(id)arg1;
- (void)setTrackedTravelingStartLocation:(id)arg1;
- (void)setTravelingGeofenceExitDate:(id)arg1;
- (unsigned long long)state;
- (id)trackedTravelingStartDate;
- (id)trackedTravelingStartLocation;
- (id)travelingGeofenceExitDate;

@end
