
@interface GEOTransitEngineDebugData : PBCodable <NSCopying> {
    struct { 
        unsigned int has_score : 1; 
    }  _flags;
    double  _score;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasScore;
@property (nonatomic) double score;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
