
@interface GEOSharedNavChargingStationInfo : PBCodable <NSCopying> {
    double  _chargingTime;
    struct { 
        unsigned int has_chargingTime : 1; 
        unsigned int has_muid : 1; 
    }  _flags;
    unsigned long long  _muid;
    NSString * _name;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double chargingTime;
@property (nonatomic) bool hasChargingTime;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (double)chargingTime;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChargingTime;
- (bool)hasMuid;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingTime:(double)arg1;
- (void)setHasChargingTime:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
