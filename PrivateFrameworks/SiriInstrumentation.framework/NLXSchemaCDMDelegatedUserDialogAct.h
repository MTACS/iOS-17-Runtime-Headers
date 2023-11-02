
@interface NLXSchemaCDMDelegatedUserDialogAct : SISchemaInstrumentationMessage {
    unsigned int  _asrHypothesisIndex;
    unsigned int  _contextMatcherSpanCount;
    NSString * _externalParserId;
    struct { 
        unsigned int asrHypothesisIndex : 1; 
        unsigned int siriVocabularySpanCount : 1; 
        unsigned int mentionResolverSpanCount : 1; 
        unsigned int rewriteType : 1; 
        unsigned int contextMatcherSpanCount : 1; 
    }  _has;
    bool  _hasExternalParserId;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    unsigned int  _mentionResolverSpanCount;
    int  _rewriteType;
    unsigned int  _siriVocabularySpanCount;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) unsigned int contextMatcherSpanCount;
@property (nonatomic, copy) NSString *externalParserId;
@property (nonatomic) bool hasAsrHypothesisIndex;
@property (nonatomic) bool hasContextMatcherSpanCount;
@property (nonatomic) bool hasExternalParserId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasMentionResolverSpanCount;
@property (nonatomic) bool hasRewriteType;
@property (nonatomic) bool hasSiriVocabularySpanCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) unsigned int mentionResolverSpanCount;
@property (nonatomic) int rewriteType;
@property (nonatomic) unsigned int siriVocabularySpanCount;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)asrHypothesisIndex;
- (unsigned int)contextMatcherSpanCount;
- (void)deleteAsrHypothesisIndex;
- (void)deleteContextMatcherSpanCount;
- (void)deleteExternalParserId;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpanCount;
- (void)deleteRewriteType;
- (void)deleteSiriVocabularySpanCount;
- (id)dictionaryRepresentation;
- (id)externalParserId;
- (bool)hasAsrHypothesisIndex;
- (bool)hasContextMatcherSpanCount;
- (bool)hasExternalParserId;
- (bool)hasLinkId;
- (bool)hasMentionResolverSpanCount;
- (bool)hasRewriteType;
- (bool)hasSiriVocabularySpanCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (unsigned int)mentionResolverSpanCount;
- (bool)readFrom:(id)arg1;
- (int)rewriteType;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setContextMatcherSpanCount:(unsigned int)arg1;
- (void)setExternalParserId:(id)arg1;
- (void)setHasAsrHypothesisIndex:(bool)arg1;
- (void)setHasContextMatcherSpanCount:(bool)arg1;
- (void)setHasExternalParserId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasMentionResolverSpanCount:(bool)arg1;
- (void)setHasRewriteType:(bool)arg1;
- (void)setHasSiriVocabularySpanCount:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMentionResolverSpanCount:(unsigned int)arg1;
- (void)setRewriteType:(int)arg1;
- (void)setSiriVocabularySpanCount:(unsigned int)arg1;
- (unsigned int)siriVocabularySpanCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
