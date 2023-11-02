
@interface NLXSchemaMARRSQueryRewriteEvaluatedTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _rewrittenUserUtterances;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *rewrittenUserUtterances;

- (void).cxx_destruct;
- (void)addRewrittenUserUtterances:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRewrittenUserUtterances;
- (void)deleteLinkId;
- (void)deleteRewrittenUserUtterances;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUserUtterances;
- (id)rewrittenUserUtterancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rewrittenUserUtterancesCount;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRewrittenUserUtterances:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
