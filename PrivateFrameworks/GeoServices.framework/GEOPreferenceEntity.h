
@interface GEOPreferenceEntity : PBCodable <NSCopying> {
    unsigned long long  _chargingNetworkMuid;
    struct { 
        unsigned int has_chargingNetworkMuid : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long chargingNetworkMuid;
@property (nonatomic) bool hasChargingNetworkMuid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)chargingNetworkMuid;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChargingNetworkMuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChargingNetworkMuid:(unsigned long long)arg1;
- (void)setHasChargingNetworkMuid:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
