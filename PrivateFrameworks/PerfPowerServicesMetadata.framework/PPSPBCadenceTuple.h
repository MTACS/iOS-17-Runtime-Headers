
@interface PPSPBCadenceTuple : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    unsigned long long  _value;
}

@property (nonatomic) bool hasType;
@property (nonatomic) bool hasValue;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(unsigned long long)arg1;
- (int)type;
- (unsigned long long)value;
- (void)writeTo:(id)arg1;

@end
