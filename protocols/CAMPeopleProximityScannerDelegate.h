
@protocol CAMPeopleProximityScannerDelegate <NSObject>

@required

- (void)peopleProximityScanner:(id <CAMPeopleProximityScanner>)arg1 didDiscoverIdentity:(id <CAMLibrarySelectionIdentityProtocol>)arg2 distance:(unsigned long long)arg3 rssi:(long long)arg4;
- (void)peopleProximityScanner:(id <CAMPeopleProximityScanner>)arg1 didLoseIdentity:(id <CAMLibrarySelectionIdentityProtocol>)arg2;
- (bool)peopleProximityScanner:(id <CAMPeopleProximityScanner>)arg1 shouldDiscoverIdentity:(id <CAMLibrarySelectionIdentityProtocol>)arg2;
- (void)peopleProximityScannerDidStopDiscovery:(id <CAMPeopleProximityScanner>)arg1;

@end
