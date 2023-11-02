
@interface SIRINLUINTERNALTokenChain : PBCodable <NSCopying> {
    NSString * _locale;
    NSString * _stringValue;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) NSMutableArray *tokens;

+ (Class)tokensType;

- (void).cxx_destruct;
- (void)addTokens:(id)arg1;
- (void)clearTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)stringValue;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (void)writeTo:(id)arg1;

@end
