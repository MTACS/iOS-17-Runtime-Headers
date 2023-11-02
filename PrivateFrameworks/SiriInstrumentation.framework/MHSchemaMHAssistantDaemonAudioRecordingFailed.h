
@interface MHSchemaMHAssistantDaemonAudioRecordingFailed : SISchemaInstrumentationMessage {
    NSString * _audioInterfaceProductId;
    NSString * _audioInterfaceVendorId;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    bool  _hasAudioInterfaceProductId;
    bool  _hasAudioInterfaceVendorId;
    int  _reason;
}

@property (nonatomic, copy) NSString *audioInterfaceProductId;
@property (nonatomic, copy) NSString *audioInterfaceVendorId;
@property (nonatomic) bool hasAudioInterfaceProductId;
@property (nonatomic) bool hasAudioInterfaceVendorId;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (id)audioInterfaceProductId;
- (id)audioInterfaceVendorId;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasAudioInterfaceProductId;
- (bool)hasAudioInterfaceVendorId;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setAudioInterfaceProductId:(id)arg1;
- (void)setAudioInterfaceVendorId:(id)arg1;
- (void)setHasAudioInterfaceProductId:(bool)arg1;
- (void)setHasAudioInterfaceVendorId:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
