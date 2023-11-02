
@interface VGVirtualGarageService : NSObject <VGVirtualGarageActions, VGVirtualGarageObserver> {
    NSString * _activeVehicleIdentifier;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSHashTable * _clients;
    geo_isolater * _clientsIsolater;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    GEOObserverHashTable * _observers;
}

@property (copy) NSString *activeVehicleIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;

+ (bool)canUseVirtualGarageXPCService;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)_clearActiveVehicleIdentifierIfNeeded:(id)arg1;
- (void)_closeConnection;
- (void)_openConnection;
- (id)activeVehicleIdentifier;
- (void)closeForClient:(id)arg1;
- (id)connection;
- (id)init;
- (id)messageTargetWithErrorReply:(id /* block */)arg1;
- (void)openForClient:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)setActiveVehicleIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)unregisterObserver:(id)arg1;
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
