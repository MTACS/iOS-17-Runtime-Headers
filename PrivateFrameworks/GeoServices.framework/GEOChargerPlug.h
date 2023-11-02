
@interface GEOChargerPlug : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maximumPower : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    unsigned int  _maximumPower;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaximumPower;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int maximumPower;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaximumPower;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)maximumPower;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaximumPower:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMaximumPower:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
