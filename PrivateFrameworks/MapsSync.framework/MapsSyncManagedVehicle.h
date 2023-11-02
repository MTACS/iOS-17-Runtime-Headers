
@interface MapsSyncManagedVehicle : NSManagedObject

@property (nonatomic, copy) NSString *colorHex;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSData *currentVehicleState;
@property (nonatomic, copy) NSDate *dateOfVehicleIngestion;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, copy) NSString *headUnitMacAddress;
@property (nonatomic, copy) NSString *iapIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastStateUpdateDate;
@property (nonatomic, copy) NSString *licensePlate;
@property (nonatomic, copy) NSString *lprPowerType;
@property (nonatomic, copy) NSString *lprVehicleType;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, copy) NSString *pairedAppIdentifier;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *powerByConnector;
@property (nonatomic, copy) NSData *preferredChargingNetworks;
@property (nonatomic, copy) NSString *siriIntentsIdentifier;
@property (nonatomic, retain) NSNumber *supportedConnectors;
@property (nonatomic, copy) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSNumber *vehicleType;
@property (nonatomic, retain) NSNumber *year;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
