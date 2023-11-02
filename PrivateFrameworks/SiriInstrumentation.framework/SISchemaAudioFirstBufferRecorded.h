
@interface SISchemaAudioFirstBufferRecorded : SISchemaInstrumentationMessage {
    int  _audioInputRoute;
    SISchemaHardwareInterfaceIdentifier * _hardwareInterfaceVendorID;
    struct { 
        unsigned int audioInputRoute : 1; 
    }  _has;
    bool  _hasHardwareInterfaceVendorID;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic, retain) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID;
@property (nonatomic) bool hasAudioInputRoute;
@property (nonatomic) bool hasHardwareInterfaceVendorID;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)audioInputRoute;
- (void)deleteAudioInputRoute;
- (void)deleteHardwareInterfaceVendorID;
- (id)dictionaryRepresentation;
- (id)hardwareInterfaceVendorID;
- (bool)hasAudioInputRoute;
- (bool)hasHardwareInterfaceVendorID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioInputRoute:(int)arg1;
- (void)setHardwareInterfaceVendorID:(id)arg1;
- (void)setHasAudioInputRoute:(bool)arg1;
- (void)setHasHardwareInterfaceVendorID:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
