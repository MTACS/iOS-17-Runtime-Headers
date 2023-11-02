
@interface MapsSync.MapsSyncMutableVehicle : MapsSync.MapsSyncMutableBaseItem {
    void _proxy;
}

@property (nonatomic, copy) NSString *colorHex;
@property (nonatomic, copy) NSData *currentVehicleState;
@property (nonatomic, copy) NSDate *dateOfVehicleIngestion;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, copy) NSString *headUnitMacAddress;
@property (nonatomic, copy) NSString *iapIdentifier;
@property (nonatomic, copy) NSDate *lastStateUpdateDate;
@property (nonatomic, copy) NSString *licensePlate;
@property (nonatomic, copy) NSString *lprPowerType;
@property (nonatomic, copy) NSString *lprVehicleType;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *pairedAppIdentifier;
@property (nonatomic, copy) NSData *powerByConnector;
@property (nonatomic, copy) NSData *preferredChargingNetworks;
@property (nonatomic, copy) NSString *siriIntentsIdentifier;
@property (nonatomic, retain) NSNumber *supportedConnectors;
@property (nonatomic, copy) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSNumber *vehicleType;
@property (nonatomic, retain) NSNumber *year;

- (void).cxx_destruct;
- (id)colorHex;
- (id)currentVehicleState;
- (id)dateOfVehicleIngestion;
- (id)displayName;
- (id)headUnitBluetoothIdentifier;
- (id)headUnitMacAddress;
- (id)iapIdentifier;
- (id)initWithProxyObject:(id)arg1;
- (id)lastStateUpdateDate;
- (id)licensePlate;
- (id)lprPowerType;
- (id)lprVehicleType;
- (id)manufacturer;
- (id)model;
- (id)pairedAppIdentifier;
- (id)powerByConnector;
- (id)preferredChargingNetworks;
- (void)setColorHex:(id)arg1;
- (void)setCurrentVehicleState:(id)arg1;
- (void)setDateOfVehicleIngestion:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeadUnitBluetoothIdentifier:(id)arg1;
- (void)setHeadUnitMacAddress:(id)arg1;
- (void)setIapIdentifier:(id)arg1;
- (void)setLastStateUpdateDate:(id)arg1;
- (void)setLicensePlate:(id)arg1;
- (void)setLprPowerType:(id)arg1;
- (void)setLprVehicleType:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPairedAppIdentifier:(id)arg1;
- (void)setPowerByConnector:(id)arg1;
- (void)setPreferredChargingNetworks:(id)arg1;
- (void)setSiriIntentsIdentifier:(id)arg1;
- (void)setSupportedConnectors:(id)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (void)setVehicleType:(id)arg1;
- (void)setYear:(id)arg1;
- (id)siriIntentsIdentifier;
- (id)supportedConnectors;
- (id)vehicleIdentifier;
- (id)vehicleType;
- (id)year;

@end
