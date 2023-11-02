
@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferStart : SISchemaInstrumentationMessage {
    struct { 
        unsigned int lastAudioRecordBufferStartTimeOffsetInNs : 1; 
    }  _has;
    unsigned long long  _lastAudioRecordBufferStartTimeOffsetInNs;
}

@property (nonatomic) bool hasLastAudioRecordBufferStartTimeOffsetInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long lastAudioRecordBufferStartTimeOffsetInNs;

- (void)deleteLastAudioRecordBufferStartTimeOffsetInNs;
- (id)dictionaryRepresentation;
- (bool)hasLastAudioRecordBufferStartTimeOffsetInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)lastAudioRecordBufferStartTimeOffsetInNs;
- (bool)readFrom:(id)arg1;
- (void)setHasLastAudioRecordBufferStartTimeOffsetInNs:(bool)arg1;
- (void)setLastAudioRecordBufferStartTimeOffsetInNs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
