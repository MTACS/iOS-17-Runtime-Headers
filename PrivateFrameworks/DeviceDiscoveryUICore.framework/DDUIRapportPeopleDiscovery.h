
@interface DDUIRapportPeopleDiscovery : NSObject {
    id /* block */  _availablePeopleChangedHandler;
    NSMutableDictionary * _discoveredDevicesMap;
    RPRemoteDisplayDiscovery * _discovery;
    id /* block */  _discoverySessionChangedHandler;
    id /* block */  _personDeclinedHandler;
    NSArray * _previousAvailablePeople;
}

@property (nonatomic, copy) id /* block */ availablePeopleChangedHandler;
@property (nonatomic, retain) NSMutableDictionary *discoveredDevicesMap;
@property (nonatomic, retain) RPRemoteDisplayDiscovery *discovery;
@property (nonatomic, copy) id /* block */ discoverySessionChangedHandler;
@property (nonatomic, copy) id /* block */ personDeclinedHandler;
@property (nonatomic, retain) NSArray *previousAvailablePeople;

- (void).cxx_destruct;
- (void)activateDiscoveryWithCompletion:(id /* block */)arg1;
- (id)availablePeople;
- (id /* block */)availablePeopleChangedHandler;
- (void)cancelPerson:(id)arg1;
- (id)discoveredDevicesMap;
- (id)discovery;
- (id /* block */)discoverySessionChangedHandler;
- (id)getDiscoveredDevicesMap;
- (id)initWithRemoteDisplayDiscovery:(id)arg1 deviceSelectedHandler:(id /* block */)arg2;
- (void)invalidate;
- (id /* block */)personDeclinedHandler;
- (id)previousAvailablePeople;
- (void)selectPerson:(id)arg1;
- (void)setAvailablePeopleChangedHandler:(id /* block */)arg1;
- (void)setDiscoveredDevicesMap:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setDiscoverySessionChangedHandler:(id /* block */)arg1;
- (void)setPersonDeclinedHandler:(id /* block */)arg1;
- (void)setPreviousAvailablePeople:(id)arg1;

@end
