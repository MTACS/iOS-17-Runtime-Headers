
@interface GEOLPRRegionInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_routingRequiredFields : 1; 
        unsigned int read_licensePlateTemplate : 1; 
        unsigned int read_licensePlateValidationRules : 1; 
        unsigned int read_validPowerTypeKeys : 1; 
        unsigned int read_validVehicleTypeKeys : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _licensePlateTemplate;
    NSMutableArray * _licensePlateValidationRules;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _routingRequiredFields;
    NSMutableArray * _validPowerTypeKeys;
    NSMutableArray * _validVehicleTypeKeys;
}

@property (nonatomic, readonly) bool hasLicensePlateTemplate;
@property (nonatomic, retain) NSString *licensePlateTemplate;
@property (nonatomic, retain) NSMutableArray *licensePlateValidationRules;
@property (nonatomic, readonly) int*routingRequiredFields;
@property (nonatomic, readonly) unsigned long long routingRequiredFieldsCount;
@property (nonatomic, retain) NSMutableArray *validPowerTypeKeys;
@property (nonatomic, retain) NSMutableArray *validVehicleTypeKeys;

+ (bool)isValid:(id)arg1;
+ (Class)licensePlateValidationRulesType;
+ (Class)validPowerTypeKeysType;
+ (Class)validVehicleTypeKeysType;

- (void).cxx_destruct;
- (int)StringAsRoutingRequiredFields:(id)arg1;
- (void)addLicensePlateValidationRules:(id)arg1;
- (void)addRoutingRequiredFields:(int)arg1;
- (void)addValidPowerTypeKeys:(id)arg1;
- (void)addValidVehicleTypeKeys:(id)arg1;
- (void)clearLicensePlateValidationRules;
- (void)clearRoutingRequiredFields;
- (void)clearValidPowerTypeKeys;
- (void)clearValidVehicleTypeKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLicensePlateTemplate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlateTemplate;
- (id)licensePlateValidationRules;
- (id)licensePlateValidationRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)licensePlateValidationRulesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int*)routingRequiredFields;
- (id)routingRequiredFieldsAsString:(int)arg1;
- (int)routingRequiredFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)routingRequiredFieldsCount;
- (void)setLicensePlateTemplate:(id)arg1;
- (void)setLicensePlateValidationRules:(id)arg1;
- (void)setRoutingRequiredFields:(int*)arg1 count:(unsigned long long)arg2;
- (void)setValidPowerTypeKeys:(id)arg1;
- (void)setValidVehicleTypeKeys:(id)arg1;
- (id)validPowerTypeKeys;
- (id)validPowerTypeKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)validPowerTypeKeysCount;
- (id)validVehicleTypeKeys;
- (id)validVehicleTypeKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)validVehicleTypeKeysCount;
- (void)writeTo:(id)arg1;

@end
