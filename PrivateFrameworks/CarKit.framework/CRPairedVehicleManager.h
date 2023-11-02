
@interface CRPairedVehicleManager : NSObject {
    CRCarKitServiceClient * _serviceClient;
}

@property (nonatomic, retain) CRCarKitServiceClient *serviceClient;

- (void).cxx_destruct;
- (id)_firstVehicleMatchingTest:(id /* block */)arg1;
- (id)allVehicles;
- (void)fetchAllVehiclesWithCompletion:(id /* block */)arg1;
- (void)fetchPairedVehiclesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)pairedVehicles;
- (bool)removeVehicle:(id)arg1;
- (void)removeVehicle:(id)arg1 completion:(id /* block */)arg2;
- (id)saveVehicle:(id)arg1;
- (void)saveVehicle:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceClient;
- (void)setServiceClient:(id)arg1;
- (void)syncFetchAllVehiclesWithCompletion:(id /* block */)arg1;
- (id)vehicleForBluetoothAddress:(id)arg1;
- (id)vehicleForCertificateSerial:(id)arg1;
- (id)vehicleNameForWiFiUUID:(id)arg1;

@end
