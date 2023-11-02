
@interface MHSchemaMHAssistantDaemonAudioLateBufferDetected : SISchemaInstrumentationMessage {
    unsigned long long  _bufferReceiptTimeOffsetInNs;
    struct { 
        unsigned int bufferReceiptTimeOffsetInNs : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long bufferReceiptTimeOffsetInNs;
@property (nonatomic) bool hasBufferReceiptTimeOffsetInNs;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned long long)bufferReceiptTimeOffsetInNs;
- (void)deleteBufferReceiptTimeOffsetInNs;
- (id)dictionaryRepresentation;
- (bool)hasBufferReceiptTimeOffsetInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBufferReceiptTimeOffsetInNs:(unsigned long long)arg1;
- (void)setHasBufferReceiptTimeOffsetInNs:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
