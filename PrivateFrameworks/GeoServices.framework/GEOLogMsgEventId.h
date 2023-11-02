
@interface GEOLogMsgEventId : PBCodable <NSCopying> {
    unsigned int  _deanonymizeId;
    struct { 
        unsigned int has_high : 1; 
        unsigned int has_low : 1; 
        unsigned int has_deanonymizeId : 1; 
    }  _flags;
    unsigned long long  _high;
    unsigned long long  _low;
}

@property (nonatomic) unsigned int deanonymizeId;
@property (nonatomic) bool hasDeanonymizeId;
@property (nonatomic) bool hasHigh;
@property (nonatomic) bool hasLow;
@property (nonatomic) unsigned long long high;
@property (nonatomic) unsigned long long low;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deanonymizeId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeanonymizeId;
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
- (void)setDeanonymizeId:(unsigned int)arg1;
- (void)setHasDeanonymizeId:(bool)arg1;
- (void)setHasHigh:(bool)arg1;
- (void)setHasLow:(bool)arg1;
- (void)setHigh:(unsigned long long)arg1;
- (void)setLow:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
