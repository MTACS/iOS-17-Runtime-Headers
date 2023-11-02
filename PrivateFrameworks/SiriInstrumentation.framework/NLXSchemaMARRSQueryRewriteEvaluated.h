
@interface NLXSchemaMARRSQueryRewriteEvaluated : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _queryRewriteHypotheses;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *queryRewriteHypotheses;

- (void).cxx_destruct;
- (void)addQueryRewriteHypotheses:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearQueryRewriteHypotheses;
- (void)deleteLinkId;
- (void)deleteQueryRewriteHypotheses;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)queryRewriteHypotheses;
- (id)queryRewriteHypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryRewriteHypothesesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setQueryRewriteHypotheses:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
