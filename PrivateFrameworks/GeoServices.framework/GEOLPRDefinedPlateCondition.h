
@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying> {
    struct { 
        unsigned int read_plateMatchConditions : 1; 
        unsigned int read_powerTypeKeys : 1; 
        unsigned int read_vehicleTypeKeys : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _plateMatchConditions;
    NSMutableArray * _powerTypeKeys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _vehicleTypeKeys;
}

@property (nonatomic, retain) NSMutableArray *plateMatchConditions;
@property (nonatomic, retain) NSMutableArray *powerTypeKeys;
@property (nonatomic, retain) NSMutableArray *vehicleTypeKeys;

+ (bool)isValid:(id)arg1;
+ (Class)plateMatchConditionType;
+ (Class)powerTypeKeyType;
+ (Class)vehicleTypeKeyType;

- (void).cxx_destruct;
- (void)addPlateMatchCondition:(id)arg1;
- (void)addPowerTypeKey:(id)arg1;
- (void)addVehicleTypeKey:(id)arg1;
- (void)clearPlateMatchConditions;
- (void)clearPowerTypeKeys;
- (void)clearVehicleTypeKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)plateMatchConditionAtIndex:(unsigned long long)arg1;
- (id)plateMatchConditions;
- (unsigned long long)plateMatchConditionsCount;
- (id)powerTypeKeyAtIndex:(unsigned long long)arg1;
- (id)powerTypeKeys;
- (unsigned long long)powerTypeKeysCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPlateMatchConditions:(id)arg1;
- (void)setPowerTypeKeys:(id)arg1;
- (void)setVehicleTypeKeys:(id)arg1;
- (id)vehicleTypeKeyAtIndex:(unsigned long long)arg1;
- (id)vehicleTypeKeys;
- (unsigned long long)vehicleTypeKeysCount;
- (void)writeTo:(id)arg1;

@end
