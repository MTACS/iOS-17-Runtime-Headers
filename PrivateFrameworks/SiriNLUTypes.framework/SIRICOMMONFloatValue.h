
@interface SIRICOMMONFloatValue : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    float  _value;
}

@property (nonatomic) bool hasValue;
@property (nonatomic) float value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(float)arg1;
- (float)value;
- (void)writeTo:(id)arg1;

@end
