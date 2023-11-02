
@interface ASRSchemaASRRecognitionResultTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _tokens;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *tokens;

- (void).cxx_destruct;
- (void)addTokens:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTokens;
- (void)deleteLinkId;
- (void)deleteTokens;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (void)writeTo:(id)arg1;

@end
