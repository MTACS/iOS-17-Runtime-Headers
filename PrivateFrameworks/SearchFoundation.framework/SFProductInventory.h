
@interface SFProductInventory : NSObject <NSCopying, NSSecureCoding, SFProductInventory> {
    int  _availabilityStatus;
    NSNumber * _distance;
    int  _distanceUnit;
    struct { 
        unsigned int type : 1; 
        unsigned int availabilityStatus : 1; 
        unsigned int distanceUnit : 1; 
    }  _has;
    NSString * _storeAddress;
    NSString * _storeId;
    NSString * _storeName;
    NSDate * _timestamp;
    int  _type;
}

@property (nonatomic) int availabilityStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSNumber *distance;
@property (nonatomic) int distanceUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *storeAddress;
@property (nonatomic, copy) NSString *storeId;
@property (nonatomic, copy) NSString *storeName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)availabilityStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)distance;
- (int)distanceUnit;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAvailabilityStatus;
- (bool)hasDistanceUnit;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setAvailabilityStatus:(int)arg1;
- (void)setDistance:(id)arg1;
- (void)setDistanceUnit:(int)arg1;
- (void)setStoreAddress:(id)arg1;
- (void)setStoreId:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(int)arg1;
- (id)storeAddress;
- (id)storeId;
- (id)storeName;
- (id)timestamp;
- (int)type;

@end
