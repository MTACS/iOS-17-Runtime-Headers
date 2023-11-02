
@interface HAP2Accessory : HAP2LoggingObject <HAP2Accessory, HAP2AccessoryPrivate> {
    <HAP2PairedAccessoryServerPrivate> * _accessoryServerPrivate;
    <HAP2AccessoryDelegate> * _delegate;
    NSString * _firmwareVersion;
    NSString * _identifier;
    unsigned long long  _instanceID;
    NSNumber * _internalSleepIntervalMs;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _productData;
    HAP2PropertyLock * _propertyLock;
    NSString * _serialNumber;
    NSArray * _services;
}

@property (nonatomic, readonly) <HAP2PairedAccessoryServer> *accessoryServer;
@property (nonatomic, readonly) <HAP2PairedAccessoryServerPrivate> *accessoryServerPrivate;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long instanceID;
@property (nonatomic, retain) NSNumber *internalSleepIntervalMs;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isPrimary, nonatomic, readonly) bool primary;
@property (nonatomic, copy) NSString *productData;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSArray *services;
@property (nonatomic, readonly) double sleepInterval;
@property (readonly) Class superclass;

+ (id)accessoryWithAccessoryServer:(id)arg1 instanceID:(unsigned long long)arg2 discoveredServices:(id)arg3;
+ (bool)validateAccessoryInformationService:(id)arg1;
+ (bool)validateDiscoveredServices:(id)arg1 isPrimary:(bool)arg2;
+ (bool)validateProtocolInformationService:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUpdatedAccessoryInformationService:(id)arg1;
- (void)_handleUpdatedAccessoryRuntimeInformationService:(id)arg1;
- (void)_updateDiscoveredServices:(id)arg1;
- (id)accessoryServer;
- (id)accessoryServerPrivate;
- (unsigned long long)category;
- (void)characteristicValueChanged:(id)arg1;
- (unsigned long long)connectionState;
- (id)delegate;
- (id)disableNotificationsForCharacteristics:(id)arg1 completion:(id /* block */)arg2;
- (id)enableNotificationsForCharacteristics:(id)arg1 completion:(id /* block */)arg2;
- (id)firmwareVersion;
- (id)identifier;
- (id)identifyWithCompletion:(id /* block */)arg1;
- (id)initWithAccessoryServer:(id)arg1 instanceID:(unsigned long long)arg2 discoveredServices:(id)arg3;
- (unsigned long long)instanceID;
- (id)internalSleepInterval;
- (id)internalSleepIntervalMs;
- (bool)isPrimary;
- (id)manufacturer;
- (id)model;
- (id)name;
- (id)productData;
- (id)propertyLock;
- (id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)serialNumber;
- (id)services;
- (void)setDelegate:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setInternalSleepInterval:(id)arg1;
- (void)setInternalSleepIntervalMs:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductData:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setServices:(id)arg1;
- (double)sleepInterval;
- (void)updateConnectionState:(unsigned long long)arg1;
- (bool)updateDiscoveredServices:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end
