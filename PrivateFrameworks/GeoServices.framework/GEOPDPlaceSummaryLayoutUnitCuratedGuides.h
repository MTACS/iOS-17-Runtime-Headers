
@interface GEOPDPlaceSummaryLayoutUnitCuratedGuides : PBCodable <NSCopying> {
    struct { 
        unsigned int has_minNumGuides : 1; 
    }  _flags;
    unsigned int  _minNumGuides;
}

@property (nonatomic) bool hasMinNumGuides;
@property (nonatomic) unsigned int minNumGuides;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinNumGuides;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minNumGuides;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMinNumGuides:(bool)arg1;
- (void)setMinNumGuides:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
