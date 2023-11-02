
@interface MXRecognitionPhraseTokens : PBCodable <NSCopying> {
    NSMutableArray * _tokens;
}

@property (nonatomic, retain) NSMutableArray *tokens;

+ (Class)tokensType;

- (void).cxx_destruct;
- (void)addTokens:(id)arg1;
- (void)clearTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (void)writeTo:(id)arg1;

@end
