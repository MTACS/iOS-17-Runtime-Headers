
@protocol DNDSMutableHeartbeatMetricsProtocol <DNDSHeartbeatMetricsProtocol>

@required

- (bool)enabled;
- (bool)enabledAtLocation;
- (bool)enabledDrivingMode;
- (bool)enabledDuringEvent;
- (bool)enabledForOneHour;
- (bool)enabledFromControlCenterPhone;
- (bool)enabledFromControlCenterWatch;
- (bool)enabledSleepMode;
- (bool)enabledUntilEvening;
- (bool)enabledUntilMorning;
- (bool)manuallyEnabled;
- (NSNumber *)numberOfManualSessions;
- (NSNumber *)numberOfSessions;
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
- (void)setNumberOfManualSessions:(NSNumber *)arg1;
- (void)setNumberOfSessions:(NSNumber *)arg1;

@end
