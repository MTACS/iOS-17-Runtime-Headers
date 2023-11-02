
@interface GEOMinimumVisibleElevationRange : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lowerBoundCm : 1; 
        unsigned int has_upperBoundCm : 1; 
    }  _flags;
    int  _lowerBoundCm;
    PBUnknownFields * _unknownFields;
    int  _upperBoundCm;
}

@property (nonatomic) bool hasLowerBoundCm;
@property (nonatomic) bool hasUpperBoundCm;
@property (nonatomic) int lowerBoundCm;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int upperBoundCm;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLowerBoundCm;
- (bool)hasUpperBoundCm;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)lowerBoundCm;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLowerBoundCm:(bool)arg1;
- (void)setHasUpperBoundCm:(bool)arg1;
- (void)setLowerBoundCm:(int)arg1;
- (void)setUpperBoundCm:(int)arg1;
- (id)unknownFields;
- (int)upperBoundCm;
- (void)writeTo:(id)arg1;

@end
