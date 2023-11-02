
@interface GEOVLFARFailureTypes : PBCodable <NSCopying> {
    bool  _arWalkingNoLabels;
    bool  _arWalkingUndulationFailure;
    struct { 
        unsigned int has_arWalkingNoLabels : 1; 
        unsigned int has_arWalkingUndulationFailure : 1; 
    }  _flags;
}

@property (nonatomic) bool arWalkingNoLabels;
@property (nonatomic) bool arWalkingUndulationFailure;
@property (nonatomic) bool hasArWalkingNoLabels;
@property (nonatomic) bool hasArWalkingUndulationFailure;

+ (bool)isValid:(id)arg1;

- (bool)arWalkingNoLabels;
- (bool)arWalkingUndulationFailure;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArWalkingNoLabels;
- (bool)hasArWalkingUndulationFailure;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArWalkingNoLabels:(bool)arg1;
- (void)setArWalkingUndulationFailure:(bool)arg1;
- (void)setHasArWalkingNoLabels:(bool)arg1;
- (void)setHasArWalkingUndulationFailure:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
