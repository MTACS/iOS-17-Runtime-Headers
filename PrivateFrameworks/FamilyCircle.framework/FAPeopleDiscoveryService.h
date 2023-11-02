
@interface FAPeopleDiscoveryService : NSObject <FAPeopleDiscoveryServiceProtocol> {
    RPPeopleDiscovery * _peopleDiscovery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getNearbyPeople;
- (id)init;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;

@end
