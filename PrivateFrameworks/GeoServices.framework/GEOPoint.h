
@interface GEOPoint : PBCodable <NSCopying> {
    int  _elevationCm;
    struct { 
        unsigned int has_elevationCm : 1; 
        unsigned int has_offsetM : 1; 
    }  _flags;
    unsigned int  _offsetM;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int elevationCm;
@property (nonatomic) bool hasElevationCm;
@property (nonatomic) bool hasOffsetM;
@property (nonatomic) unsigned int offsetM;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)elevationCm;
- (bool)hasElevationCm;
- (bool)hasOffsetM;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offsetM;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setElevationCm:(int)arg1;
- (void)setHasElevationCm:(bool)arg1;
- (void)setHasOffsetM:(bool)arg1;
- (void)setOffsetM:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
