
@interface GEOPathStretch : PBCodable <NSCopying> {
    unsigned int  _endOffsetCm;
    struct { 
        unsigned int has_endOffsetCm : 1; 
        unsigned int has_startOffsetCm : 1; 
    }  _flags;
    unsigned int  _startOffsetCm;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int endOffsetCm;
@property (nonatomic) bool hasEndOffsetCm;
@property (nonatomic) bool hasStartOffsetCm;
@property (nonatomic) unsigned int startOffsetCm;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOffsetCm;
- (bool)hasEndOffsetCm;
- (bool)hasStartOffsetCm;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndOffsetCm:(unsigned int)arg1;
- (void)setHasEndOffsetCm:(bool)arg1;
- (void)setHasStartOffsetCm:(bool)arg1;
- (void)setStartOffsetCm:(unsigned int)arg1;
- (unsigned int)startOffsetCm;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
