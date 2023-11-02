
@interface NLXSchemaMARRSContextualSpanMatcherEnded : SISchemaInstrumentationMessage {
    NSArray * _contextualSpans;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSArray *contextualSpans;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addContextualSpans:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearContextualSpans;
- (id)contextualSpans;
- (id)contextualSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)contextualSpansCount;
- (void)deleteContextualSpans;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setContextualSpans:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
