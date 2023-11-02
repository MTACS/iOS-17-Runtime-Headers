
@interface _PSProximityBooster : NSObject {
    RPPeopleDiscovery * _peopleDiscovery;
}

@property (nonatomic, retain) RPPeopleDiscovery *peopleDiscovery;

- (void).cxx_destruct;
- (id)init;
- (id)peopleDiscovery;
- (void)setPeopleDiscovery:(id)arg1;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)suggestionsByBoostingNearbySuggestions:(id)arg1;

@end
