
@interface NLXSchemaCDMMatchingSpanEnded : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    bool  _hasContextId;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _matchingSpans;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *matchingSpans;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMatchingSpans;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteLinkId;
- (void)deleteMatchingSpans;
- (id)dictionaryRepresentation;
- (bool)hasContextId;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (bool)readFrom:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMatchingSpans:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
