
@interface MHSchemaMHAssistantDaemonAudioStopRecordingEnded : SISchemaInstrumentationMessage {
    NSArray * _fanInfos;
}

@property (nonatomic, copy) NSArray *fanInfos;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addFanInfo:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearFanInfo;
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
- (void)setFanInfos:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
