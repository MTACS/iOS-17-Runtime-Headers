
@interface GEORouteLegRange : PBCodable <NSCopying> {
    unsigned int  _endValidDistanceOffsetCm;
    struct { 
        unsigned int has_endValidDistanceOffsetCm : 1; 
        unsigned int has_startValidDistanceOffsetCm : 1; 
    }  _flags;
    unsigned int  _startValidDistanceOffsetCm;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int endValidDistanceOffsetCm;
@property (nonatomic) bool hasEndValidDistanceOffsetCm;
@property (nonatomic) bool hasStartValidDistanceOffsetCm;
@property (nonatomic) unsigned int startValidDistanceOffsetCm;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endValidDistanceOffsetCm;
- (bool)hasEndValidDistanceOffsetCm;
- (bool)hasStartValidDistanceOffsetCm;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndValidDistanceOffsetCm:(unsigned int)arg1;
- (void)setHasEndValidDistanceOffsetCm:(bool)arg1;
- (void)setHasStartValidDistanceOffsetCm:(bool)arg1;
- (void)setStartValidDistanceOffsetCm:(unsigned int)arg1;
- (unsigned int)startValidDistanceOffsetCm;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
