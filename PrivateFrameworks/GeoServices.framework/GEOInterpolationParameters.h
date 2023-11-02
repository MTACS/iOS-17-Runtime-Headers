
@interface GEOInterpolationParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_fractionalDistance : 1; 
        unsigned int has_sideOfLine : 1; 
    }  _flags;
    double  _fractionalDistance;
    unsigned int  _sideOfLine;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double fractionalDistance;
@property (nonatomic) bool hasFractionalDistance;
@property (nonatomic) bool hasSideOfLine;
@property (nonatomic) unsigned int sideOfLine;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)fractionalDistance;
- (bool)hasFractionalDistance;
- (bool)hasSideOfLine;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFractionalDistance:(double)arg1;
- (void)setHasFractionalDistance:(bool)arg1;
- (void)setHasSideOfLine:(bool)arg1;
- (void)setSideOfLine:(unsigned int)arg1;
- (unsigned int)sideOfLine;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
