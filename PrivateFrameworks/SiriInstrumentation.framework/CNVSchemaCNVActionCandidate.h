
@interface CNVSchemaCNVActionCandidate : SISchemaInstrumentationMessage {
    SISchemaUUID * _actionCandidateId;
    unsigned int  _affinityScore;
    struct { 
        unsigned int plugin : 1; 
        unsigned int affinityScore : 1; 
    }  _has;
    bool  _hasActionCandidateId;
    bool  _hasLinkMetadata;
    bool  _hasParseHypothesisId;
    bool  _hasPommesId;
    CNVSchemaCNVLinkMetadata * _linkMetadata;
    SISchemaUUID * _parseHypothesisId;
    int  _plugin;
    SISchemaUUID * _pommesId;
    unsigned long long  _whichParseid;
}

@property (nonatomic, retain) SISchemaUUID *actionCandidateId;
@property (nonatomic) unsigned int affinityScore;
@property (nonatomic) bool hasActionCandidateId;
@property (nonatomic) bool hasAffinityScore;
@property (nonatomic) bool hasLinkMetadata;
@property (nonatomic) bool hasParseHypothesisId;
@property (nonatomic) bool hasPlugin;
@property (nonatomic) bool hasPommesId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CNVSchemaCNVLinkMetadata *linkMetadata;
@property (nonatomic, retain) SISchemaUUID *parseHypothesisId;
@property (nonatomic) int plugin;
@property (nonatomic, retain) SISchemaUUID *pommesId;
@property (nonatomic, readonly) unsigned long long whichParseid;

- (void).cxx_destruct;
- (id)actionCandidateId;
- (unsigned int)affinityScore;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteActionCandidateId;
- (void)deleteAffinityScore;
- (void)deleteLinkMetadata;
- (void)deleteParseHypothesisId;
- (void)deletePlugin;
- (void)deletePommesId;
- (id)dictionaryRepresentation;
- (bool)hasActionCandidateId;
- (bool)hasAffinityScore;
- (bool)hasLinkMetadata;
- (bool)hasParseHypothesisId;
- (bool)hasPlugin;
- (bool)hasPommesId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkMetadata;
- (id)parseHypothesisId;
- (int)plugin;
- (id)pommesId;
- (bool)readFrom:(id)arg1;
- (void)setActionCandidateId:(id)arg1;
- (void)setAffinityScore:(unsigned int)arg1;
- (void)setHasActionCandidateId:(bool)arg1;
- (void)setHasAffinityScore:(bool)arg1;
- (void)setHasLinkMetadata:(bool)arg1;
- (void)setHasParseHypothesisId:(bool)arg1;
- (void)setHasPlugin:(bool)arg1;
- (void)setHasPommesId:(bool)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setParseHypothesisId:(id)arg1;
- (void)setPlugin:(int)arg1;
- (void)setPommesId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichParseid;
- (void)writeTo:(id)arg1;

@end
