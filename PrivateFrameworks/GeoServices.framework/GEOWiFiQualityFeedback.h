
@interface GEOWiFiQualityFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxValue : 1; 
        unsigned int has_type : 1; 
        unsigned int has_value : 1; 
    }  _flags;
    unsigned int  _maxValue;
    int  _type;
    unsigned int  _value;
}

@property (nonatomic) bool hasMaxValue;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasValue;
@property (nonatomic) unsigned int maxValue;
@property (nonatomic) int type;
@property (nonatomic) unsigned int value;

+ (bool)isValid:(id)arg1;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxValue;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)maxValue;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxValue:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setMaxValue:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(unsigned int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (unsigned int)value;
- (void)writeTo:(id)arg1;

@end
