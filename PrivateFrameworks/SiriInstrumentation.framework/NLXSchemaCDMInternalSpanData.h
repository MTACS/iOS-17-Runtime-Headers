
@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage {
    NLXSchemaContextualSpanData * _contextualSpanData;
    bool  _hasContextualSpanData;
    bool  _hasMentionDetectorSpanData;
    bool  _hasMentionResolverSpanData;
    bool  _hasPlumSpanData;
    bool  _hasSiriVocabularySpanData;
    NLXSchemaMentionDetectorSpanData * _mentionDetectorSpanData;
    NLXSchemaMentionResolverSpanData * _mentionResolverSpanData;
    NLXSchemaPLUMSpanData * _plumSpanData;
    NLXSchemaCDMSiriVocabularySpanData * _siriVocabularySpanData;
}

@property (nonatomic, retain) NLXSchemaContextualSpanData *contextualSpanData;
@property (nonatomic) bool hasContextualSpanData;
@property (nonatomic) bool hasMentionDetectorSpanData;
@property (nonatomic) bool hasMentionResolverSpanData;
@property (nonatomic) bool hasPlumSpanData;
@property (nonatomic) bool hasSiriVocabularySpanData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaMentionDetectorSpanData *mentionDetectorSpanData;
@property (nonatomic, retain) NLXSchemaMentionResolverSpanData *mentionResolverSpanData;
@property (nonatomic, retain) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic, retain) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)contextualSpanData;
- (void)deleteContextualSpanData;
- (void)deleteMentionDetectorSpanData;
- (void)deleteMentionResolverSpanData;
- (void)deletePlumSpanData;
- (void)deleteSiriVocabularySpanData;
- (id)dictionaryRepresentation;
- (bool)hasContextualSpanData;
- (bool)hasMentionDetectorSpanData;
- (bool)hasMentionResolverSpanData;
- (bool)hasPlumSpanData;
- (bool)hasSiriVocabularySpanData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mentionDetectorSpanData;
- (id)mentionResolverSpanData;
- (id)plumSpanData;
- (bool)readFrom:(id)arg1;
- (void)setContextualSpanData:(id)arg1;
- (void)setHasContextualSpanData:(bool)arg1;
- (void)setHasMentionDetectorSpanData:(bool)arg1;
- (void)setHasMentionResolverSpanData:(bool)arg1;
- (void)setHasPlumSpanData:(bool)arg1;
- (void)setHasSiriVocabularySpanData:(bool)arg1;
- (void)setMentionDetectorSpanData:(id)arg1;
- (void)setMentionResolverSpanData:(id)arg1;
- (void)setPlumSpanData:(id)arg1;
- (void)setSiriVocabularySpanData:(id)arg1;
- (id)siriVocabularySpanData;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
