
@interface GEOLogMsgStateMarket : PBCodable <NSCopying> {
    NSString * _market;
}

@property (nonatomic, readonly) bool hasMarket;
@property (nonatomic, retain) NSString *market;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMarket;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)market;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMarket:(id)arg1;
- (void)writeTo:(id)arg1;

@end
