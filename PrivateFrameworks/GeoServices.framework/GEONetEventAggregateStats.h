
@interface GEONetEventAggregateStats : PBCodable <NSCopying> {
    unsigned long long  _algMean;
    struct { 
        unsigned int has_algMean : 1; 
        unsigned int has_max : 1; 
        unsigned int has_min : 1; 
        unsigned int has_p10 : 1; 
        unsigned int has_p25 : 1; 
        unsigned int has_p50 : 1; 
        unsigned int has_p75 : 1; 
        unsigned int has_p90 : 1; 
        unsigned int has_p99 : 1; 
    }  _flags;
    unsigned long long  _max;
    unsigned long long  _min;
    unsigned long long  _p10;
    unsigned long long  _p25;
    unsigned long long  _p50;
    unsigned long long  _p75;
    unsigned long long  _p90;
    unsigned long long  _p99;
}

@property (nonatomic) unsigned long long algMean;
@property (nonatomic) bool hasAlgMean;
@property (nonatomic) bool hasMax;
@property (nonatomic) bool hasMin;
@property (nonatomic) bool hasP10;
@property (nonatomic) bool hasP25;
@property (nonatomic) bool hasP50;
@property (nonatomic) bool hasP75;
@property (nonatomic) bool hasP90;
@property (nonatomic) bool hasP99;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long p10;
@property (nonatomic) unsigned long long p25;
@property (nonatomic) unsigned long long p50;
@property (nonatomic) unsigned long long p75;
@property (nonatomic) unsigned long long p90;
@property (nonatomic) unsigned long long p99;

+ (bool)isValid:(id)arg1;

- (unsigned long long)algMean;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgMean;
- (bool)hasMax;
- (bool)hasMin;
- (bool)hasP10;
- (bool)hasP25;
- (bool)hasP50;
- (bool)hasP75;
- (bool)hasP90;
- (bool)hasP99;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)max;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)min;
- (unsigned long long)p10;
- (unsigned long long)p25;
- (unsigned long long)p50;
- (unsigned long long)p75;
- (unsigned long long)p90;
- (unsigned long long)p99;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlgMean:(unsigned long long)arg1;
- (void)setHasAlgMean:(bool)arg1;
- (void)setHasMax:(bool)arg1;
- (void)setHasMin:(bool)arg1;
- (void)setHasP10:(bool)arg1;
- (void)setHasP25:(bool)arg1;
- (void)setHasP50:(bool)arg1;
- (void)setHasP75:(bool)arg1;
- (void)setHasP90:(bool)arg1;
- (void)setHasP99:(bool)arg1;
- (void)setMax:(unsigned long long)arg1;
- (void)setMin:(unsigned long long)arg1;
- (void)setP10:(unsigned long long)arg1;
- (void)setP25:(unsigned long long)arg1;
- (void)setP50:(unsigned long long)arg1;
- (void)setP75:(unsigned long long)arg1;
- (void)setP90:(unsigned long long)arg1;
- (void)setP99:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
