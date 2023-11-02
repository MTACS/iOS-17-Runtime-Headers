
@interface NLXSchemaMARRSMentionResolverEnded : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _mentionResolverSpans;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *mentionResolverSpans;

- (void).cxx_destruct;
- (void)addMentionResolverSpans:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMentionResolverSpans;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpans;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)mentionResolverSpans;
- (id)mentionResolverSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)mentionResolverSpansCount;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMentionResolverSpans:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
