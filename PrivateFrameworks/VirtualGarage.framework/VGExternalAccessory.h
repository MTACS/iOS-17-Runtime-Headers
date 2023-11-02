
@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    VGExternalAccessoryState * _accessoryState;
    <VGExternalAccessoryUpdating> * _accessoryUpdateDelegate;
    VGVehicle * _currentVehicle;
    VGVehicleState * _currentVehicleState;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    VGExternalAccessoryModelFilter * _modelFilter;
    NSMutableDictionary * _trackedAccessoriesByConnectionId;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <VGExternalAccessoryUpdating> *accessoryUpdateDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessoryDidConnect:(id)arg1;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidUpdateVehicle:(id)arg1;
- (void)_addNewCarPlayAccessory:(id)arg1;
- (id)_bluetoothIdentifier;
- (void)_checkAvailableAccessoriesAndAttachIfNeeded;
- (bool)_currentStatePassesEVRoutingRequirements;
- (id)_firmwareId;
- (id)_identifier;
- (bool)_isAccessoryTracked:(id)arg1;
- (bool)_isConnectedToCarPlayAccessory;
- (bool)_isConnectedToElectricVehicle;
- (bool)_isConnectedVehicleAllowlisted;
- (id)_modelIdFromArguments:(id)arg1;
- (void)_notifyDelegateWithCurrentVehicle;
- (void)_removeCarPlayAccessory:(id)arg1;
- (void)_updateFromVehicleInfo:(id)arg1;
- (id)_vehicleForCurrentState;
- (id)_vehicleStateForCurrentState;
- (id)accessoryUpdateDelegate;
- (void)dealloc;
- (void)getStateOfChargeForVehicle:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isConnectedToAccessoryWithIdentifier:(id)arg1;
- (bool)isConnectedToVehicle:(id)arg1;
- (void)listCarsWithCompletion:(id /* block */)arg1;
- (void)setAccessoryUpdateDelegate:(id)arg1;

@end
