
@protocol FAPeopleDiscoveryServiceProtocol <NSObject>

@required

+ (id)sharedInstance;

- (NSMutableSet *)getNearbyPeople;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;

@end
