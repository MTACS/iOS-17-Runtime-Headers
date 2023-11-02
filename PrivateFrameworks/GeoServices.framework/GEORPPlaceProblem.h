
@interface GEORPPlaceProblem : PBCodable <NSCopying> {
    unsigned int  _componentIndex;
    unsigned int  _componentValueIndex;
    struct { 
        unsigned int has_componentIndex : 1; 
        unsigned int has_componentValueIndex : 1; 
        unsigned int has_problematicDepartureSequenceIndex : 1; 
    }  _flags;
    unsigned int  _problematicDepartureSequenceIndex;
}

@property (nonatomic) unsigned int componentIndex;
@property (nonatomic) unsigned int componentValueIndex;
@property (nonatomic) bool hasComponentIndex;
@property (nonatomic) bool hasComponentValueIndex;
@property (nonatomic) bool hasProblematicDepartureSequenceIndex;
@property (nonatomic) unsigned int problematicDepartureSequenceIndex;

+ (bool)isValid:(id)arg1;

- (unsigned int)componentIndex;
- (unsigned int)componentValueIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComponentIndex;
- (bool)hasComponentValueIndex;
- (bool)hasProblematicDepartureSequenceIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)problematicDepartureSequenceIndex;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComponentIndex:(unsigned int)arg1;
- (void)setComponentValueIndex:(unsigned int)arg1;
- (void)setHasComponentIndex:(bool)arg1;
- (void)setHasComponentValueIndex:(bool)arg1;
- (void)setHasProblematicDepartureSequenceIndex:(bool)arg1;
- (void)setProblematicDepartureSequenceIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
