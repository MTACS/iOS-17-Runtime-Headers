
@interface SISchemaTextToSpeechBegin : SISchemaInstrumentationMessage {
    NSString * _aceID;
    int  _audioOutputRoute;
    SISchemaHardwareInterfaceIdentifier * _hardwareInterfaceVendorID;
    struct { 
        unsigned int audioOutputRoute : 1; 
    }  _has;
    bool  _hasAceID;
    bool  _hasHardwareInterfaceVendorID;
}

@property (nonatomic, copy) NSString *aceID;
@property (nonatomic) int audioOutputRoute;
@property (nonatomic, retain) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID;
@property (nonatomic) bool hasAceID;
@property (nonatomic) bool hasAudioOutputRoute;
@property (nonatomic) bool hasHardwareInterfaceVendorID;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)aceID;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)audioOutputRoute;
- (void)deleteAceID;
- (void)deleteAudioOutputRoute;
- (void)deleteHardwareInterfaceVendorID;
- (id)dictionaryRepresentation;
- (id)hardwareInterfaceVendorID;
- (bool)hasAceID;
- (bool)hasAudioOutputRoute;
- (bool)hasHardwareInterfaceVendorID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceID:(id)arg1;
- (void)setAudioOutputRoute:(int)arg1;
- (void)setHardwareInterfaceVendorID:(id)arg1;
- (void)setHasAceID:(bool)arg1;
- (void)setHasAudioOutputRoute:(bool)arg1;
- (void)setHasHardwareInterfaceVendorID:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
