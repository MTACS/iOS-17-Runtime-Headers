
@interface GEOUpdateLocation : PBCodable <NSCopying> {
    struct { 
        unsigned int has_metersFromStartOfRoute : 1; 
        unsigned int has_minSecondsSinceLastUpdate : 1; 
    }  _flags;
    unsigned int  _metersFromStartOfRoute;
    unsigned int  _minSecondsSinceLastUpdate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMetersFromStartOfRoute;
@property (nonatomic) bool hasMinSecondsSinceLastUpdate;
@property (nonatomic) unsigned int metersFromStartOfRoute;
@property (nonatomic) unsigned int minSecondsSinceLastUpdate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetersFromStartOfRoute;
- (bool)hasMinSecondsSinceLastUpdate;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)metersFromStartOfRoute;
- (unsigned int)minSecondsSinceLastUpdate;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMetersFromStartOfRoute:(bool)arg1;
- (void)setHasMinSecondsSinceLastUpdate:(bool)arg1;
- (void)setMetersFromStartOfRoute:(unsigned int)arg1;
- (void)setMinSecondsSinceLastUpdate:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
