
@interface NLXSchemaCDMDelegatedUserDialogActTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    bool  _hasRewrittenUtterance;
    SISchemaUUID * _linkId;
    NSString * _rewrittenUtterance;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasRewrittenUtterance;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *rewrittenUtterance;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterance;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasRewrittenUtterance;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUtterance;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasRewrittenUtterance:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
