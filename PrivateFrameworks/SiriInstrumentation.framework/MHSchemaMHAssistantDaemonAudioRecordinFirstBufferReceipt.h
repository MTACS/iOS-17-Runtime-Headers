
@interface MHSchemaMHAssistantDaemonAudioRecordinFirstBufferReceipt : SISchemaInstrumentationMessage {
    unsigned long long  _firstBufferReceiptTimeOffsetInNs;
    struct { 
        unsigned int firstBufferReceiptTimeOffsetInNs : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long firstBufferReceiptTimeOffsetInNs;
@property (nonatomic) bool hasFirstBufferReceiptTimeOffsetInNs;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFirstBufferReceiptTimeOffsetInNs;
- (id)dictionaryRepresentation;
- (unsigned long long)firstBufferReceiptTimeOffsetInNs;
- (bool)hasFirstBufferReceiptTimeOffsetInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFirstBufferReceiptTimeOffsetInNs:(unsigned long long)arg1;
- (void)setHasFirstBufferReceiptTimeOffsetInNs:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
