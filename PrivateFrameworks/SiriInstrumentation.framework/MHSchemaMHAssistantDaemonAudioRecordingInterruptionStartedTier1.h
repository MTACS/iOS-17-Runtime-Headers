
@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1 : SISchemaInstrumentationMessage {
    NSArray * _activeSessionDisplayIds;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSArray *activeSessionDisplayIds;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (id)activeSessionDisplayIds;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeSessionDisplayIdsCount;
- (void)addActiveSessionDisplayIds:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActiveSessionDisplayIds;
- (void)deleteActiveSessionDisplayIds;
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
- (void)setActiveSessionDisplayIds:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
