
@interface PKProtobufCustomPrecisionAmount : PBCodable <NSCopying> {
    long long  _amount;
    unsigned int  _decimalDigitsMultiplier;
}

@property (nonatomic) long long amount;
@property (nonatomic) unsigned int decimalDigitsMultiplier;

- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)decimalDigitsMultiplier;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setDecimalDigitsMultiplier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
