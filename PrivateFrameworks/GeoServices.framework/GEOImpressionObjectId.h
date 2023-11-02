
@interface GEOImpressionObjectId : PBCodable <NSCopying> {
    struct { 
        unsigned int has_high : 1; 
        unsigned int has_low : 1; 
    }  _flags;
    unsigned long long  _high;
    unsigned long long  _low;
}

@property (nonatomic) bool hasHigh;
@property (nonatomic) bool hasLow;
@property (nonatomic) unsigned long long high;
@property (nonatomic) unsigned long long low;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHigh;
- (bool)hasLow;
- (unsigned long long)hash;
- (unsigned long long)high;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)low;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHigh:(bool)arg1;
- (void)setHasLow:(bool)arg1;
- (void)setHigh:(unsigned long long)arg1;
- (void)setLow:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
