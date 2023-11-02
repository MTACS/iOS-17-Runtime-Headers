
@interface PPSPBUnit : PBCodable <NSCopying> {
    NSString * _symbol;
}

@property (nonatomic, readonly) bool hasSymbol;
@property (nonatomic, retain) NSString *symbol;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSymbol;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;
- (void)writeTo:(id)arg1;

@end
