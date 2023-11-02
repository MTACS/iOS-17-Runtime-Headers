
@protocol HMDDatabaseZoneManagerDelegate <NSObject>

@optional

- (void)zoneManager:(HMDDatabaseZoneManager *)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)zoneManagerDidStart:(HMDDatabaseZoneManager *)arg1;
- (void)zoneManagerDidStop:(HMDDatabaseZoneManager *)arg1;

@end
