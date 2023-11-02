
@interface NPKProtoRemoveExpressPassesWithCardTypeRequest : PBRequest <NSCopying> {
    NSString * _cardType;
}

@property (nonatomic, retain) NSString *cardType;
@property (nonatomic, readonly) bool hasCardType;

- (void).cxx_destruct;
- (id)cardType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCardType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCardType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
