
@protocol DNDSHeartbeatMetricsProtocol <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

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

@end
