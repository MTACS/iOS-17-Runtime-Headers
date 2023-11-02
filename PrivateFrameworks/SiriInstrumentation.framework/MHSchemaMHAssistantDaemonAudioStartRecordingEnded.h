
@interface MHSchemaMHAssistantDaemonAudioStartRecordingEnded : SISchemaInstrumentationMessage {
    NSArray * _activeSessionDisplayIds;
    NSArray * _fanInfos;
}

@property (nonatomic, copy) NSArray *activeSessionDisplayIds;
@property (nonatomic, copy) NSArray *fanInfos;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)activeSessionDisplayIds;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeSessionDisplayIdsCount;
- (void)addActiveSessionDisplayIds:(id)arg1;
- (void)addFanInfo:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActiveSessionDisplayIds;
- (void)clearFanInfo;
- (void)deleteActiveSessionDisplayIds;
- (void)deleteFanInfo;
- (id)dictionaryRepresentation;
- (id)fanInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)fanInfoCount;
- (id)fanInfos;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActiveSessionDisplayIds:(id)arg1;
- (void)setFanInfos:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
