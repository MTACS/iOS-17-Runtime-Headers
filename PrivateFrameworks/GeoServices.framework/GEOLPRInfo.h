
@interface GEOLPRInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_maskedplateGeneratorValidatorVersion : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_licensePlate : 1; 
        unsigned int read_powerTypeKey : 1; 
        unsigned int read_vehicleTypeKey : 1; 
        unsigned int read_versionId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _licensePlate;
    unsigned int  _maskedplateGeneratorValidatorVersion;
    NSString * _powerTypeKey;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _timestamp;
    PBUnknownFields * _unknownFields;
    NSString * _vehicleTypeKey;
    NSData * _versionId;
}

@property (nonatomic, readonly) bool hasLicensePlate;
@property (nonatomic) bool hasMaskedplateGeneratorValidatorVersion;
@property (nonatomic, readonly) bool hasPowerTypeKey;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasVehicleTypeKey;
@property (nonatomic, readonly) bool hasVersionId;
@property (nonatomic, retain) NSString *licensePlate;
@property (nonatomic) unsigned int maskedplateGeneratorValidatorVersion;
@property (nonatomic, retain) NSString *powerTypeKey;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vehicleTypeKey;
@property (nonatomic, retain) NSData *versionId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLicensePlate;
- (bool)hasMaskedplateGeneratorValidatorVersion;
- (bool)hasPowerTypeKey;
- (bool)hasTimestamp;
- (bool)hasVehicleTypeKey;
- (bool)hasVersionId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlate;
- (unsigned int)maskedplateGeneratorValidatorVersion;
- (void)mergeFrom:(id)arg1;
- (id)powerTypeKey;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaskedplateGeneratorValidatorVersion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLicensePlate:(id)arg1;
- (void)setMaskedplateGeneratorValidatorVersion:(unsigned int)arg1;
- (void)setPowerTypeKey:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVehicleTypeKey:(id)arg1;
- (void)setVersionId:(id)arg1;
- (unsigned long long)timestamp;
- (id)unknownFields;
- (id)vehicleTypeKey;
- (id)versionId;
- (void)writeTo:(id)arg1;

@end
