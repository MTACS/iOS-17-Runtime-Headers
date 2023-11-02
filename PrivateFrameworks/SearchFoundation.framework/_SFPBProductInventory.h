
@interface _SFPBProductInventory : PBCodable <NSSecureCoding, _SFPBProductInventory> {
    int  _availabilityStatus;
    float  _distance;
    int  _distanceUnit;
    NSString * _storeAddress;
    NSString * _storeId;
    NSString * _storeName;
    _SFPBDate * _timestamp;
    int  _type;
}

@property (nonatomic) int availabilityStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float distance;
@property (nonatomic) int distanceUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *storeAddress;
@property (nonatomic, copy) NSString *storeId;
@property (nonatomic, copy) NSString *storeName;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBDate *timestamp;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)availabilityStatus;
- (id)dictionaryRepresentation;
- (float)distance;
- (int)distanceUnit;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAvailabilityStatus:(int)arg1;
- (void)setDistance:(float)arg1;
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
- (void)writeTo:(id)arg1;

@end
