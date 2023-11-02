
@protocol SFProductInventory <NSObject>

@required

- (int)availabilityStatus;
- (NSDictionary *)dictionaryRepresentation;
- (NSNumber *)distance;
- (int)distanceUnit;
- (NSData *)jsonData;
- (void)setAvailabilityStatus:(int)arg1;
- (void)setDistance:(NSNumber *)arg1;
- (void)setDistanceUnit:(int)arg1;
- (void)setStoreAddress:(NSString *)arg1;
- (void)setStoreId:(NSString *)arg1;
- (void)setStoreName:(NSString *)arg1;
- (void)setTimestamp:(NSDate *)arg1;
- (void)setType:(int)arg1;
- (NSString *)storeAddress;
- (NSString *)storeId;
- (NSString *)storeName;
- (NSDate *)timestamp;
- (int)type;

@end
