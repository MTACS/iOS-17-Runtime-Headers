
@interface CAMPeopleProximityController : NSObject <CAMPeopleProximityControllerProtocol, CAMPeopleProximityScannerDelegate> {
    <CAMPeopleProximityDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    Class  _proximityScannerClass;
    NSObject<OS_dispatch_queue> * _queue;
    CNContactStore * _queue_contactStore;
    unsigned long long  _queue_discoveryState;
    bool  _queue_hasDiscoveredFirstPerson;
    bool  _queue_hasDiscoveredFirstPersonNearby;
    NSSet * _queue_identities;
    <CAMPeopleProximityScanner> * _queue_proximityScanner;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMPeopleProximityDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class proximityScannerClass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CNContactStore *queue_contactStore;
@property (nonatomic) unsigned long long queue_discoveryState;
@property (nonatomic) bool queue_hasDiscoveredFirstPerson;
@property (nonatomic) bool queue_hasDiscoveredFirstPersonNearby;
@property (nonatomic, retain) NSSet *queue_identities;
@property (nonatomic, retain) <CAMPeopleProximityScanner> *queue_proximityScanner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_handleFinishedWaitingForScanner:(id)arg1;
- (void)_queue_handleScannerDidStop;
- (void)_queue_startDiscoveryForIdentities:(id)arg1;
- (void)_queue_stopDiscovery;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)peopleProximityScanner:(id)arg1 didDiscoverIdentity:(id)arg2 distance:(unsigned long long)arg3 rssi:(long long)arg4;
- (void)peopleProximityScanner:(id)arg1 didLoseIdentity:(id)arg2;
- (bool)peopleProximityScanner:(id)arg1 shouldDiscoverIdentity:(id)arg2;
- (void)peopleProximityScannerDidStopDiscovery:(id)arg1;
- (Class)proximityScannerClass;
- (id)queue;
- (id)queue_contactStore;
- (unsigned long long)queue_discoveryState;
- (bool)queue_hasDiscoveredFirstPerson;
- (bool)queue_hasDiscoveredFirstPersonNearby;
- (id)queue_identities;
- (id)queue_proximityScanner;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setProximityScannerClass:(Class)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueue_contactStore:(id)arg1;
- (void)setQueue_discoveryState:(unsigned long long)arg1;
- (void)setQueue_hasDiscoveredFirstPerson:(bool)arg1;
- (void)setQueue_hasDiscoveredFirstPersonNearby:(bool)arg1;
- (void)setQueue_identities:(id)arg1;
- (void)setQueue_proximityScanner:(id)arg1;
- (void)startDiscoveryForIdentities:(id)arg1;
- (void)stopDiscovery;

@end
