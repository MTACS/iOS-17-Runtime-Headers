
@interface GEONearbyTransitGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int has_linesShown : 1; 
        unsigned int has_lines : 1; 
    }  _flags;
    unsigned int  _lines;
    unsigned int  _linesShown;
}

@property (nonatomic) bool hasLines;
@property (nonatomic) bool hasLinesShown;
@property (nonatomic) unsigned int lines;
@property (nonatomic) unsigned int linesShown;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLines;
- (bool)hasLinesShown;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)lines;
- (unsigned int)linesShown;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLines:(bool)arg1;
- (void)setHasLinesShown:(bool)arg1;
- (void)setLines:(unsigned int)arg1;
- (void)setLinesShown:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
