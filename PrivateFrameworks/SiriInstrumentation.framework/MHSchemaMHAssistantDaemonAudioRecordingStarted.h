
@interface MHSchemaMHAssistantDaemonAudioRecordingStarted : SISchemaInstrumentationMessage {
    int  _audioInputRoute;
    NSString * _audioInterfaceProductId;
    NSString * _audioInterfaceVendorId;
    struct { 
        unsigned int audioInputRoute : 1; 
        unsigned int source : 1; 
    }  _has;
    bool  _hasAudioInterfaceProductId;
    bool  _hasAudioInterfaceVendorId;
    int  _source;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic, copy) NSString *audioInterfaceProductId;
@property (nonatomic, copy) NSString *audioInterfaceVendorId;
@property (nonatomic) bool hasAudioInputRoute;
@property (nonatomic) bool hasAudioInterfaceProductId;
@property (nonatomic) bool hasAudioInterfaceVendorId;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)audioInputRoute;
- (id)audioInterfaceProductId;
- (id)audioInterfaceVendorId;
- (void)deleteAudioInputRoute;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasAudioInputRoute;
- (bool)hasAudioInterfaceProductId;
- (bool)hasAudioInterfaceVendorId;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioInputRoute:(int)arg1;
- (void)setAudioInterfaceProductId:(id)arg1;
- (void)setAudioInterfaceVendorId:(id)arg1;
- (void)setHasAudioInputRoute:(bool)arg1;
- (void)setHasAudioInterfaceProductId:(bool)arg1;
- (void)setHasAudioInterfaceVendorId:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
