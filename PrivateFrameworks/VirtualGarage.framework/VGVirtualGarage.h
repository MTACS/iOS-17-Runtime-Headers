
@interface VGVirtualGarage : NSObject <GEOConfigChangeListenerDelegate, NSCopying, NSSecureCoding, VGDataCoordinatorDelegate, VGVirtualGarageActions, VGVirtualGaragePersistingDelegate> {
    VGDataCoordinator * _dataCoordinator;
    <VGVirtualGarageDelegate> * _delegate;
    bool  _finishedLoadingVehicles;
    bool  _isDataCoordinatorRunning;
    <VGVirtualGaragePersisting> * _persister;
    NSMutableArray * _queuedGetGarageCompletionHandlers;
    NSString * _selectedVehicleIdentifier;
    bool  _shouldAssumeFullCharge;
    NSMutableArray * _vehicles;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VGVirtualGarageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VGVehicle *selectedVehicle;
@property (nonatomic) bool shouldAssumeFullCharge;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *vehicles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addVehicle:(id)arg1;
- (void)_endContinuousUpdates;
- (void)_executeQueuedCompletionHandlersIfNeeded;
- (void)_forceUpdateWithVehicles:(id)arg1;
- (id)_garageCopy;
- (void)_notifyObserversGarageDidUpdateVehicles;
- (void)_onboardVehicle:(id)arg1;
- (bool)_persisterHasStaleStateForVehicle:(id)arg1;
- (void)_removeVehicleWithIdentifier:(id)arg1;
- (void)_removeVehiclesWithUninstalledAppsIfNeeded;
- (void)_saveVehicle:(id)arg1 syncAcrossDevices:(bool)arg2;
- (void)_selectVehicleWithIdentifier:(id)arg1;
- (void)_setDataCoordintorRunning:(bool)arg1;
- (void)_setShouldUsePreferredNetworks:(bool)arg1 forVehicle:(id)arg2;
- (void)_startContinuousUpdatesIfNeeded;
- (void)_unpairVehicle:(id)arg1;
- (void)_updateDataCoordinatorAvailability;
- (id)_vehicleWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dataCoordinator:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;
- (void)dataCoordinator:(id)arg1 wantsToUpdateVehicle:(id)arg2 syncAcrossDevices:(bool)arg3;
- (void)dataCoordinatorDidUpdateInstalledApps:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)garagePersister:(id)arg1 wantsToUpdateVehicles:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithGaragePersister:(id)arg1;
- (id)selectedVehicle;
- (void)setDelegate:(id)arg1;
- (void)setShouldAssumeFullCharge:(bool)arg1;
- (bool)shouldAssumeFullCharge;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;
- (id)vehicles;
- (void)virtualGarageAddVehicle:(id)arg1;
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
