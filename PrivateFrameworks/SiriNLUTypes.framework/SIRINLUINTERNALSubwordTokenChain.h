
@interface SIRINLUINTERNALSubwordTokenChain : PBCodable <NSCopying> {
    NSString * _locale;
    NSMutableArray * _subwordTokens;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSMutableArray *subwordTokens;

+ (Class)subwordTokensType;

- (void).cxx_destruct;
- (void)addSubwordTokens:(id)arg1;
- (void)clearSubwordTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSubwordTokens:(id)arg1;
- (id)subwordTokens;
- (id)subwordTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)subwordTokensCount;
- (void)writeTo:(id)arg1;

@end
