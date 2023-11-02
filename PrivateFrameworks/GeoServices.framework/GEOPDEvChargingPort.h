
@interface GEOPDEvChargingPort : PBCodable <NSCopying> {
    int  _chargingConnectorType;
    int  _chargingLevel;
    struct { 
        unsigned int has_chargingConnectorType : 1; 
        unsigned int has_chargingLevel : 1; 
        unsigned int has_power : 1; 
    }  _flags;
    unsigned int  _power;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int chargingConnectorType;
@property (nonatomic) int chargingLevel;
@property (nonatomic) bool hasChargingConnectorType;
@property (nonatomic) bool hasChargingLevel;
@property (nonatomic) bool hasPower;
@property (nonatomic) unsigned int power;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsChargingConnectorType:(id)arg1;
- (int)StringAsChargingLevel:(id)arg1;
- (int)chargingConnectorType;
- (id)chargingConnectorTypeAsString:(int)arg1;
- (int)chargingLevel;
- (id)chargingLevelAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChargingConnectorType;
- (bool)hasChargingLevel;
- (bool)hasPower;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)power;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingConnectorType:(int)arg1;
- (void)setChargingLevel:(int)arg1;
- (void)setHasChargingConnectorType:(bool)arg1;
- (void)setHasChargingLevel:(bool)arg1;
- (void)setHasPower:(bool)arg1;
- (void)setPower:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
