
@protocol MKFCharacteristic <MKFObject, MKFCharacteristicPublicExtensions>

@required

- (NSData *)authorizationData;
- (NSArray *)bulletinRegistrations;
- (MKFCharacteristicDatabaseID *)databaseID;
- (NSString *)format;
- (<MKFHome> *)home;
- (NSNumber *)instanceID;
- (NSString *)manufacturerDescription;
- (NSArray *)notificationRegistrations;
- (NSNumber *)properties;
- (<MKFService> *)service;
- (void)setAuthorizationData:(NSData *)arg1;
- (void)setFormat:(NSString *)arg1;
- (void)setManufacturerDescription:(NSString *)arg1;
- (void)setProperties:(NSNumber *)arg1;
- (void)setType:(NSUUID *)arg1;
- (void)setUnits:(NSString *)arg1;
- (NSUUID *)type;
- (NSString *)units;

@end
