
@interface GEOTransitArrivalInfo : PBCodable <NSCopying> {
    int  _destinationLocation;
    struct { 
        unsigned int has_destinationLocation : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int destinationLocation;
@property (nonatomic) bool hasDestinationLocation;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDestinationLocation:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationLocation;
- (id)destinationLocationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDestinationLocation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationLocation:(int)arg1;
- (void)setHasDestinationLocation:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
