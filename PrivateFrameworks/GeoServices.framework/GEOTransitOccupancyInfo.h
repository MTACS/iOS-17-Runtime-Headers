
@interface GEOTransitOccupancyInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_occupancyStatus : 1; 
    }  _flags;
    int  _occupancyStatus;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasOccupancyStatus;
@property (nonatomic) int occupancyStatus;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsOccupancyStatus:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOccupancyStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)occupancyStatus;
- (id)occupancyStatusAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOccupancyStatus:(bool)arg1;
- (void)setOccupancyStatus:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
