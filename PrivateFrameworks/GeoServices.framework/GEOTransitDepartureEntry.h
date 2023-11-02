
@interface GEOTransitDepartureEntry : PBCodable <NSCopying> {
    unsigned int  _departureTime;
    struct { 
        unsigned int has_tripMuid : 1; 
        unsigned int has_departureTime : 1; 
    }  _flags;
    unsigned long long  _tripMuid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int departureTime;
@property (nonatomic) bool hasDepartureTime;
@property (nonatomic) bool hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)departureTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDepartureTime;
- (bool)hasTripMuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDepartureTime:(unsigned int)arg1;
- (void)setHasDepartureTime:(bool)arg1;
- (void)setHasTripMuid:(bool)arg1;
- (void)setTripMuid:(unsigned long long)arg1;
- (unsigned long long)tripMuid;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
