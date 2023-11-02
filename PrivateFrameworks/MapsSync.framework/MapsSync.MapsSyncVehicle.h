
@interface MapsSync.MapsSyncVehicle : MapsSync.MapsSyncBaseItem {
    void _colorHex;
    void _currentVehicleState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _dateOfVehicleIngestion;
    void _displayName;
    void _headUnitBluetoothIdentifier;
    void _headUnitMacAddress;
    void _iapIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastStateUpdateDate;
    void _licensePlate;
    void _lprPowerType;
    void _lprVehicleType;
    void _manufacturer;
    void _model;
    void _pairedAppIdentifier;
    void _powerByConnector;
    void _preferredChargingNetworks;
    void _siriIntentsIdentifier;
    void _supportedConnectors;
    void _vehicleIdentifier;
    void _vehicleType;
    void _year;
}

@property (nonatomic, readonly) NSString *colorHex;
@property (nonatomic, readonly) NSData *currentVehicleState;
@property (nonatomic, readonly) NSDate *dateOfVehicleIngestion;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, readonly) NSString *headUnitMacAddress;
@property (nonatomic, readonly) NSString *iapIdentifier;
@property (nonatomic, readonly) NSDate *lastStateUpdateDate;
@property (nonatomic, readonly) NSString *licensePlate;
@property (nonatomic, readonly) NSString *lprPowerType;
@property (nonatomic, readonly) NSString *lprVehicleType;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *pairedAppIdentifier;
@property (nonatomic, readonly) NSData *powerByConnector;
@property (nonatomic, readonly) NSData *preferredChargingNetworks;
@property (nonatomic, readonly) NSString *siriIntentsIdentifier;
@property (nonatomic, readonly) NSNumber *supportedConnectors;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readonly) NSNumber *vehicleType;
@property (nonatomic, readonly) NSNumber *year;

+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completion:(id /* block */)arg6;
+ (void)fetchForIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)colorHex;
- (id)currentVehicleState;
- (id)dateOfVehicleIngestion;
- (id)description;
- (id)displayName;
- (id)headUnitBluetoothIdentifier;
- (id)headUnitMacAddress;
- (id)iapIdentifier;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastStateUpdateDate;
- (id)licensePlate;
- (id)lprPowerType;
- (id)lprVehicleType;
- (Class)managedObjectClass;
- (id)manufacturer;
- (id)model;
- (Class)mutableObjectClass;
- (id)pairedAppIdentifier;
- (id)powerByConnector;
- (id)preferredChargingNetworks;
- (void)setPropertiesWithObject:(id)arg1;
- (id)siriIntentsIdentifier;
- (id)supportedConnectors;
- (id)vehicleIdentifier;
- (id)vehicleType;
- (id)year;

@end
