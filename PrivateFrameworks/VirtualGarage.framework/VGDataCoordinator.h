
@interface VGDataCoordinator : NSObject <VGExternalAccessoryUpdating, VGOEMAppSOCStreaming, VGOEMApplicationFinderUpdates> {
    VGExternalAccessory * _accessory;
    <VGOEMApplicationFinding> * _applicationFinder;
    NSArray * _applications;
    <VGDataCoordinatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _deviceIdentifier;
    NSMutableSet * _observedVehicles;
    NSMutableArray * _unpairedVehicles;
    NSTimer * _vehicleStateRefreshTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *unpairedVehicles;

- (void).cxx_destruct;
- (void)OEMAppsUpdated:(id)arg1;
- (id)_applicationForVehicle:(id)arg1;
- (id)_applicationRecordForVehicle:(id)arg1;
- (unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)arg1;
- (void)_invalidateRefreshTimer;
- (void)_loadAllOEMVehiclesForApps:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadIapVehicles;
- (id)_oemAppForChargeStreamForVehicle:(id)arg1;
- (void)_refreshStateForTrackedVehicles;
- (void)_removeUnpairedIapVehicleIfNeeded;
- (void)_saveOnboardingInfoForVehicle:(id)arg1;
- (void)_setupTimerIfNeeded;
- (void)_startChargeStreamForVehicle:(id)arg1;
- (void)_stopChargeStreamForVehicle:(id)arg1;
- (void)_updateGarageWithVehicle:(id)arg1 syncAcrossDevices:(bool)arg2;
- (void)_updateStateOfChargeForVehicle:(id)arg1 syncAcrossDevices:(bool)arg2 completion:(id /* block */)arg3;
- (id)_vehicleStateProviderForVehicle:(id)arg1;
- (double)_vehicleStateRefreshInterval;
- (void)accessoryUpdatedWithVehicle:(id)arg1;
- (void)dealloc;
- (id)deviceIdentifier;
- (void)endAllContinuousUpdates;
- (void)finishOnboardingVehicle:(id)arg1;
- (void)forceFetchAllVehicles;
- (void)getLatestStateOfVehicle:(id)arg1 withReply:(id /* block */)arg2;
- (id)initWithApplicationFinder:(id)arg1 externalAccessory:(id)arg2 delegate:(id)arg3;
- (bool)shouldUnpairVehicle:(id)arg1;
- (void)startContinuousUpdatesForVehicle:(id)arg1;
- (void)unpairVehicle:(id)arg1;
- (id)unpairedVehicles;
- (void)vehicleStateUpdated:(id)arg1;

@end
