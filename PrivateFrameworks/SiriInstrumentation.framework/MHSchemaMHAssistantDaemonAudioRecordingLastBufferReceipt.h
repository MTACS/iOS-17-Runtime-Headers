
@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferReceipt : SISchemaInstrumentationMessage {
    struct { 
        unsigned int lastAudioRecordBufferReceiptTimeOffsetInNs : 1; 
    }  _has;
    unsigned long long  _lastAudioRecordBufferReceiptTimeOffsetInNs;
}

@property (nonatomic) bool hasLastAudioRecordBufferReceiptTimeOffsetInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long lastAudioRecordBufferReceiptTimeOffsetInNs;

- (void)deleteLastAudioRecordBufferReceiptTimeOffsetInNs;
- (id)dictionaryRepresentation;
- (bool)hasLastAudioRecordBufferReceiptTimeOffsetInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)lastAudioRecordBufferReceiptTimeOffsetInNs;
- (bool)readFrom:(id)arg1;
- (void)setHasLastAudioRecordBufferReceiptTimeOffsetInNs:(bool)arg1;
- (void)setLastAudioRecordBufferReceiptTimeOffsetInNs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
