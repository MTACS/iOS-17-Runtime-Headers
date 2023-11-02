
@interface FLOWSchemaFLOWPegasusContextTier1 : SISchemaInstrumentationMessage {
    bool  _hasIntentTier1;
    bool  _hasKgQAExecutionTier1;
    bool  _hasLinkId;
    bool  _hasMapsExecutionTier1;
    bool  _hasSportsExecutionTier1;
    bool  _hasWebAnswerExecutionTier1;
    PEGASUSSchemaPEGASUSIntentTier1 * _intentTier1;
    FLOWSchemaFLOWKGQAExecutionTier1 * _kgQAExecutionTier1;
    SISchemaUUID * _linkId;
    FLOWSchemaFLOWMapsExecutionTier1 * _mapsExecutionTier1;
    FLOWSchemaFLOWSportsExecutionTier1 * _sportsExecutionTier1;
    FLOWSchemaFLOWWebAnswerExecutionTier1 * _webAnswerExecutionTier1;
}

@property (nonatomic) bool hasIntentTier1;
@property (nonatomic) bool hasKgQAExecutionTier1;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasMapsExecutionTier1;
@property (nonatomic) bool hasSportsExecutionTier1;
@property (nonatomic) bool hasWebAnswerExecutionTier1;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSIntentTier1 *intentTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWKGQAExecutionTier1 *kgQAExecutionTier1;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, retain) FLOWSchemaFLOWMapsExecutionTier1 *mapsExecutionTier1;
@property (nonatomic, retain) FLOWSchemaFLOWSportsExecutionTier1 *sportsExecutionTier1;
@property (nonatomic, retain) FLOWSchemaFLOWWebAnswerExecutionTier1 *webAnswerExecutionTier1;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIntentTier1;
- (void)deleteKgQAExecutionTier1;
- (void)deleteLinkId;
- (void)deleteMapsExecutionTier1;
- (void)deleteSportsExecutionTier1;
- (void)deleteWebAnswerExecutionTier1;
- (id)dictionaryRepresentation;
- (bool)hasIntentTier1;
- (bool)hasKgQAExecutionTier1;
- (bool)hasLinkId;
- (bool)hasMapsExecutionTier1;
- (bool)hasSportsExecutionTier1;
- (bool)hasWebAnswerExecutionTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentTier1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)kgQAExecutionTier1;
- (id)linkId;
- (id)mapsExecutionTier1;
- (bool)readFrom:(id)arg1;
- (void)setHasIntentTier1:(bool)arg1;
- (void)setHasKgQAExecutionTier1:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasMapsExecutionTier1:(bool)arg1;
- (void)setHasSportsExecutionTier1:(bool)arg1;
- (void)setHasWebAnswerExecutionTier1:(bool)arg1;
- (void)setIntentTier1:(id)arg1;
- (void)setKgQAExecutionTier1:(id)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMapsExecutionTier1:(id)arg1;
- (void)setSportsExecutionTier1:(id)arg1;
- (void)setWebAnswerExecutionTier1:(id)arg1;
- (id)sportsExecutionTier1;
- (id)suppressMessageUnderConditions;
- (id)webAnswerExecutionTier1;
- (void)writeTo:(id)arg1;

@end
