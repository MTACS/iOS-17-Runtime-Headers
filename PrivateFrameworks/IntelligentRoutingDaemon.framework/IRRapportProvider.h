
@interface IRRapportProvider : NSObject {
    IRCompanionLinkClient * _companionLinkClient;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSSet * _knownDevices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (nonatomic, retain) IRCompanionLinkClient *companionLinkClient;

- (void).cxx_destruct;
- (void)_logActiveDevices;
- (void)_startRapportDiscovery;
- (void)_stopDiscoveryAndResetKnownDevicesIfNeeded;
- (void)_stopRapportDiscovery;
- (void)addObserver:(id)arg1;
- (id)companionLinkClient;
- (void)dealloc;
- (void)didUpdateRapportDevices:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 companionLinkClient:(id)arg2;
- (void)logActiveDevices;
- (void)removeObserver:(id)arg1;
- (void)setCompanionLinkClient:(id)arg1;

@end
