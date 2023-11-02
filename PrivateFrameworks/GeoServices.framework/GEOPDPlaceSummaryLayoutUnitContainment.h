
@interface GEOPDPlaceSummaryLayoutUnitContainment : PBCodable <NSCopying> {
    int  _containmentType;
    struct { 
        unsigned int has_containmentType : 1; 
    }  _flags;
}

@property (nonatomic) int containmentType;
@property (nonatomic) bool hasContainmentType;

+ (bool)isValid:(id)arg1;

- (int)StringAsContainmentType:(id)arg1;
- (int)containmentType;
- (id)containmentTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainmentType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainmentType:(int)arg1;
- (void)setHasContainmentType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
