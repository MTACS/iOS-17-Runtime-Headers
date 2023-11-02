
@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _rewrittenUtterances;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *rewrittenUtterances;

- (void).cxx_destruct;
- (void)addRewrittenUtterances:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRewrittenUtterances;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterances;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUtterances;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rewrittenUtterancesCount;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRewrittenUtterances:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
