
@interface SIRICOMMONBoolValue : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    bool  _value;
}

@property (nonatomic) bool hasValue;
@property (nonatomic) bool value;

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
- (void)setValue:(bool)arg1;
- (bool)value;
- (void)writeTo:(id)arg1;

@end
