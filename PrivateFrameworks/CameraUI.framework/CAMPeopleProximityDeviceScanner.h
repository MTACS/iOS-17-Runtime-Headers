
@interface CAMPeopleProximityDeviceScanner : NSObject <CAMPeopleProximityScanner> {
    SFDeviceDiscovery * __queue_deviceDiscovery;
    NSMutableDictionary * __queue_discoveredDevices;
    NSMutableDictionary * __queue_discoveredIdentities;
    unsigned int  __queue_sessionID;
    <CAMPeopleProximityScannerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) SFDeviceDiscovery *_queue_deviceDiscovery;
@property (nonatomic, retain) NSMutableDictionary *_queue_discoveredDevices;
@property (nonatomic, retain) NSMutableDictionary *_queue_discoveredIdentities;
@property (nonatomic) unsigned int _queue_sessionID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMPeopleProximityScannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScanning;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_deviceDiscovery;
- (id)_queue_discoveredDevices;
- (id)_queue_discoveredIdentities;
- (void)_queue_discoveryActivatedWithError:(id)arg1 sessionID:(unsigned int)arg2;
- (void)_queue_discoveryDeviceFound:(id)arg1 sessionID:(unsigned int)arg2;
- (void)_queue_discoveryDeviceLost:(id)arg1 sessionID:(unsigned int)arg2;
- (void)_queue_discoveryInterruptedWithPeopleDiscoverySessionID:(unsigned int)arg1;
- (void)_queue_discoveryTimeoutForSessionID:(unsigned int)arg1;
- (unsigned int)_queue_sessionID;
- (void)dealloc;
- (id)delegate;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (bool)isScanning;
- (id)queue;
- (void)set_queue_deviceDiscovery:(id)arg1;
- (void)set_queue_discoveredDevices:(id)arg1;
- (void)set_queue_discoveredIdentities:(id)arg1;
- (void)set_queue_sessionID:(unsigned int)arg1;
- (void)startDiscoveryWithScanRate:(unsigned long long)arg1 timeout:(double)arg2;
- (void)stopDiscovery;

@end
