
@interface MHSchemaMHAssistantDaemonAudioRecordingFirstBufferStart : SISchemaInstrumentationMessage {
    NSString * _audioInterfaceProductName;
    NSString * _audioInterfaceVendorId;
    unsigned long long  _firstBufferStartTimeOffsetInNs;
    struct { 
        unsigned int firstBufferStartTimeOffsetInNs : 1; 
    }  _has;
    bool  _hasAudioInterfaceProductName;
    bool  _hasAudioInterfaceVendorId;
}

@property (nonatomic, copy) NSString *audioInterfaceProductName;
@property (nonatomic, copy) NSString *audioInterfaceVendorId;
@property (nonatomic) unsigned long long firstBufferStartTimeOffsetInNs;
@property (nonatomic) bool hasAudioInterfaceProductName;
@property (nonatomic) bool hasAudioInterfaceVendorId;
@property (nonatomic) bool hasFirstBufferStartTimeOffsetInNs;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)audioInterfaceProductName;
- (id)audioInterfaceVendorId;
- (void)deleteAudioInterfaceProductName;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteFirstBufferStartTimeOffsetInNs;
- (id)dictionaryRepresentation;
- (unsigned long long)firstBufferStartTimeOffsetInNs;
- (bool)hasAudioInterfaceProductName;
- (bool)hasAudioInterfaceVendorId;
- (bool)hasFirstBufferStartTimeOffsetInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioInterfaceProductName:(id)arg1;
- (void)setAudioInterfaceVendorId:(id)arg1;
- (void)setFirstBufferStartTimeOffsetInNs:(unsigned long long)arg1;
- (void)setHasAudioInterfaceProductName:(bool)arg1;
- (void)setHasAudioInterfaceVendorId:(bool)arg1;
- (void)setHasFirstBufferStartTimeOffsetInNs:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
