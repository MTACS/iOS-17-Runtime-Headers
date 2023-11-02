
@interface GEOLPRRoot : PBCodable <NSCopying> {
    struct { 
        unsigned int read_powerTypes : 1; 
        unsigned int read_regions : 1; 
        unsigned int read_vehicleTypes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableDictionary * _powerTypes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _regions;
    NSMutableDictionary * _vehicleTypes;
}

@property (nonatomic, retain) NSMutableDictionary *powerTypes;
@property (nonatomic, retain) NSMutableArray *regions;
@property (nonatomic, retain) NSMutableDictionary *vehicleTypes;

+ (bool)isValid:(id)arg1;
+ (Class)powerTypesType;
+ (Class)regionsType;
+ (Class)vehicleTypesType;

- (void).cxx_destruct;
- (void)addRegions:(id)arg1;
- (void)clearPowerTypes;
- (void)clearRegions;
- (void)clearVehicleTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)arg1;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)powerTypes;
- (unsigned long long)powerTypesCount;
- (id)powerTypesForKey:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)regions;
- (id)regionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionsCount;
- (void)setPowerTypes:(id)arg1;
- (void)setPowerTypesValue:(id)arg1 forKey:(id)arg2;
- (void)setRegions:(id)arg1;
- (void)setVehicleTypes:(id)arg1;
- (void)setVehicleTypesValue:(id)arg1 forKey:(id)arg2;
- (id)vehicleTypes;
- (unsigned long long)vehicleTypesCount;
- (id)vehicleTypesForKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
