
@interface VGVirtualGarageServer : NSObject <GEOConfigChangeListenerDelegate, NSXPCListenerDelegate, VGVirtualGarageActions, VGVirtualGarageDelegate> {
    NSMutableArray * _activeConnections;
    VGVirtualGarage * _garage;
    bool  _hostsVirtualGarage;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSXPCListener * _listener;
    <VGVirtualGarageObserver> * _observer;
    NSObject<OS_dispatch_queue> * _observerQueue;
    <VGVirtualGaragePersisting> * _persister;
}

@property (nonatomic, retain) NSMutableArray *activeConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VGVirtualGarage *garage;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hostsVirtualGarage;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic) <VGVirtualGarageObserver> *observer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly) Class superclass;

+ (bool)canUseVirtualGarageXPCService;
+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_setupVirtualGarageHostingIfNeeded;
- (id)activeConnections;
- (void)dealloc;
- (id)garage;
- (bool)hostsVirtualGarage;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)observer;
- (id)observerQueue;
- (void)setActiveConnections:(id)arg1;
- (void)setGarage:(id)arg1;
- (void)setHostsVirtualGarage:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)startWithPersister:(id)arg1;
- (void)stop;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;
- (void)virtualGarageAddVehicle:(id)arg1;
- (void)virtualGarageDidUpdate:(id)arg1;
- (void)virtualGarageEndContinuousUpdates;
- (void)virtualGarageForceFetchAllVehicles;
- (void)virtualGarageGetGarageWithReply:(id /* block */)arg1;
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(bool)arg2 withReply:(id /* block */)arg3;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id /* block */)arg1;
- (void)virtualGarageOnboardVehicle:(id)arg1;
- (void)virtualGarageRemoveVehicle:(id)arg1;
- (void)virtualGarageSaveVehicle:(id)arg1;
- (void)virtualGarageSelectVehicle:(id)arg1;
- (void)virtualGarageSetAssumesFullCharge:(bool)arg1;
- (void)virtualGarageSetShouldUsePreferredNetworks:(bool)arg1 forVehicle:(id)arg2;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;

@end
