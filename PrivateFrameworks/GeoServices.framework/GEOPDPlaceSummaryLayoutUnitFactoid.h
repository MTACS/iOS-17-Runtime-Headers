
@interface GEOPDPlaceSummaryLayoutUnitFactoid : PBCodable <NSCopying> {
    unsigned int  _factoidIndex;
    struct { 
        unsigned int has_factoidIndex : 1; 
    }  _flags;
}

@property (nonatomic) unsigned int factoidIndex;
@property (nonatomic) bool hasFactoidIndex;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)factoidIndex;
- (bool)hasFactoidIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFactoidIndex:(unsigned int)arg1;
- (void)setHasFactoidIndex:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
