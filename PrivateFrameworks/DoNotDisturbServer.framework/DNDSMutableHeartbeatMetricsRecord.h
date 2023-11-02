
@interface DNDSMutableHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord <DNDSMutableHeartbeatMetricsProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic) bool enabledAtLocation;
@property (nonatomic) bool enabledDrivingMode;
@property (nonatomic) bool enabledDuringEvent;
@property (nonatomic) bool enabledForOneHour;
@property (nonatomic) bool enabledFromControlCenterPhone;
@property (nonatomic) bool enabledFromControlCenterWatch;
@property (nonatomic) bool enabledSleepMode;
@property (nonatomic) bool enabledUntilEvening;
@property (nonatomic) bool enabledUntilMorning;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool manuallyEnabled;
@property (nonatomic, copy) NSNumber *numberOfManualSessions;
@property (nonatomic, copy) NSNumber *numberOfSessions;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledAtLocation:(bool)arg1;
- (void)setEnabledDrivingMode:(bool)arg1;
- (void)setEnabledDuringEvent:(bool)arg1;
- (void)setEnabledForOneHour:(bool)arg1;
- (void)setEnabledFromControlCenterPhone:(bool)arg1;
- (void)setEnabledFromControlCenterWatch:(bool)arg1;
- (void)setEnabledSleepMode:(bool)arg1;
- (void)setEnabledUntilEvening:(bool)arg1;
- (void)setEnabledUntilMorning:(bool)arg1;
- (void)setManuallyEnabled:(bool)arg1;
- (void)setNumberOfManualSessions:(id)arg1;
- (void)setNumberOfSessions:(id)arg1;

@end
