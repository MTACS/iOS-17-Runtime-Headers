
@protocol _SFPBProductInventory <NSObject>

@required

- (int)availabilityStatus;
- (float)distance;
- (int)distanceUnit;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAvailabilityStatus:(int)arg1;
- (void)setDistance:(float)arg1;
- (void)setDistanceUnit:(int)arg1;
- (void)setStoreAddress:(NSString *)arg1;
- (void)setStoreId:(NSString *)arg1;
- (void)setStoreName:(NSString *)arg1;
- (void)setTimestamp:(_SFPBDate *)arg1;
- (void)setType:(int)arg1;
- (NSString *)storeAddress;
- (NSString *)storeId;
- (NSString *)storeName;
- (_SFPBDate *)timestamp;
- (int)type;

@end
