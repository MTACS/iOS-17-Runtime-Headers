
@interface GEOLPRLicensePlateInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_licensePlateStructure : 1; 
        unsigned int read_powerTypeKeys : 1; 
        unsigned int read_vehicleTypeKeys : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLPRLicensePlateStructure * _licensePlateStructure;
    NSMutableArray * _powerTypeKeys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _vehicleTypeKeys;
}

@property (nonatomic, readonly) bool hasLicensePlateStructure;
@property (nonatomic, retain) GEOLPRLicensePlateStructure *licensePlateStructure;
@property (nonatomic, retain) NSMutableArray *powerTypeKeys;
@property (nonatomic, retain) NSMutableArray *vehicleTypeKeys;

+ (bool)isValid:(id)arg1;
+ (Class)powerTypeKeysType;
+ (Class)vehicleTypeKeysType;

- (void).cxx_destruct;
- (void)addPowerTypeKeys:(id)arg1;
- (void)addVehicleTypeKeys:(id)arg1;
- (void)clearPowerTypeKeys;
- (void)clearVehicleTypeKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLicensePlateStructure;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlateStructure;
- (void)mergeFrom:(id)arg1;
- (id)powerTypeKeys;
- (id)powerTypeKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)powerTypeKeysCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLicensePlateStructure:(id)arg1;
- (void)setPowerTypeKeys:(id)arg1;
- (void)setVehicleTypeKeys:(id)arg1;
- (id)vehicleTypeKeys;
- (id)vehicleTypeKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)vehicleTypeKeysCount;
- (void)writeTo:(id)arg1;

@end
