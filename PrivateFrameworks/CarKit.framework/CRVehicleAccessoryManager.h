
@interface CRVehicleAccessoryManager : NSObject {
    EAAccessoryManager * _accessoryManager;
    CARObserverHashTable * _observers;
    <CRVehicleAccessoryManagerDelegate> * _vehicleAccessoryDelegate;
    NSMutableDictionary * _vehiclesBySerialNumber;
}

@property (nonatomic, retain) EAAccessoryManager *accessoryManager;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic) <CRVehicleAccessoryManagerDelegate> *vehicleAccessoryDelegate;
@property (nonatomic, retain) NSMutableDictionary *vehiclesBySerialNumber;

+ (id)_certificateSerialNumberForAccessory:(id)arg1;
+ (bool)_isValidAccessoryMacAddress:(id)arg1;
+ (bool)_isVehicleAccessory:(id)arg1;
+ (id)managerInfoDataCache;
+ (id)sharedInstance;
+ (id)vehicleAccessQueue;

- (void).cxx_destruct;
- (void)_primeConnectedVehicleAccessories;
- (void)_updateVehicle:(id)arg1 usingAccessory:(id)arg2;
- (id)_vehicleForAccessory:(id)arg1;
- (id)_vehicleInfoDataForAccessory:(id)arg1;
- (id)accessoryManager;
- (void)addObserver:(id)arg1;
- (id)connectedAccessories;
- (id)connectedVehicleAccessories;
- (void)dealloc;
- (void)handleAccessoryConnect:(id)arg1;
- (void)handleAccessoryDisconnect:(id)arg1;
- (void)handleAccessoryInformationUpdate:(id)arg1;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setAccessoryManager:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setVehicleAccessoryDelegate:(id)arg1;
- (void)setVehiclesBySerialNumber:(id)arg1;
- (id)vehicleAccessoryDelegate;
- (id)vehicleAccessoryForCertificateSerial:(id)arg1;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)arg1;
- (id)vehiclesBySerialNumber;

@end
