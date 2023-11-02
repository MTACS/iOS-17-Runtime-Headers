
@interface CAMPeopleProximityRapportScanner : NSObject <CAMPeopleProximityScanner> {
    NSMutableDictionary * __queue_discoveredIdentities;
    NSMutableDictionary * __queue_discoveredPersons;
    RPPeopleDiscovery * __queue_peopleDiscovery;
    unsigned int  __queue_peopleDiscoverySessionID;
    <CAMPeopleProximityScannerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *_queue_discoveredIdentities;
@property (nonatomic, retain) NSMutableDictionary *_queue_discoveredPersons;
@property (nonatomic, retain) RPPeopleDiscovery *_queue_peopleDiscovery;
@property (nonatomic) unsigned int _queue_peopleDiscoverySessionID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMPeopleProximityScannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScanning;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_discoveredIdentities;
- (id)_queue_discoveredPersons;
- (void)_queue_discoveryActivatedWithError:(id)arg1 timeout:(double)arg2 peopleDiscoverySessionID:(unsigned int)arg3;
- (void)_queue_discoveryInterruptedWithPeopleDiscoverySessionID:(unsigned int)arg1;
- (void)_queue_discoveryInvalidatedWithPeopleDiscoverySessionID:(unsigned int)arg1;
- (void)_queue_discoveryPersonChanged:(id)arg1 withChangeFlags:(unsigned int)arg2 peopleDiscoverySessionID:(unsigned int)arg3;
- (void)_queue_discoveryPersonFound:(id)arg1 peopleDiscoverySessionID:(unsigned int)arg2;
- (void)_queue_discoveryPersonLost:(id)arg1 peopleDiscoverySessionID:(unsigned int)arg2;
- (void)_queue_discoveryTimeoutForSessionID:(unsigned int)arg1;
- (id)_queue_peopleDiscovery;
- (unsigned int)_queue_peopleDiscoverySessionID;
- (bool)_queue_shouldAdvertisePerson:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (bool)isScanning;
- (id)queue;
- (void)set_queue_discoveredIdentities:(id)arg1;
- (void)set_queue_discoveredPersons:(id)arg1;
- (void)set_queue_peopleDiscovery:(id)arg1;
- (void)set_queue_peopleDiscoverySessionID:(unsigned int)arg1;
- (void)startDiscoveryWithScanRate:(unsigned long long)arg1 timeout:(double)arg2;
- (void)stopDiscovery;

@end
