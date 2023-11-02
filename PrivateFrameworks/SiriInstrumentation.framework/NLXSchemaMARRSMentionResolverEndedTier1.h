
@interface NLXSchemaMARRSMentionResolverEndedTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _mentionResolverSpansTier1s;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *mentionResolverSpansTier1s;

- (void).cxx_destruct;
- (void)addMentionResolverSpansTier1:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMentionResolverSpansTier1;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpansTier1;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)mentionResolverSpansTier1AtIndex:(unsigned long long)arg1;
- (unsigned long long)mentionResolverSpansTier1Count;
- (id)mentionResolverSpansTier1s;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMentionResolverSpansTier1s:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
