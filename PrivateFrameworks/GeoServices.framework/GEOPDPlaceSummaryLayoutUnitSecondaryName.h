
@interface GEOPDPlaceSummaryLayoutUnitSecondaryName : PBCodable <NSCopying> {
    NSString * _symbolName;
}

@property (nonatomic, readonly) bool hasSymbolName;
@property (nonatomic, retain) NSString *symbolName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSymbolName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;
- (void)writeTo:(id)arg1;

@end
