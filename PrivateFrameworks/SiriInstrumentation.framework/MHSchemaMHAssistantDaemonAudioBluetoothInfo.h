
@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo : SISchemaInstrumentationMessage {
    int  _bluetoothAudioDeviceCategory;
    struct { 
        unsigned int state : 1; 
        unsigned int bluetoothAudioDeviceCategory : 1; 
    }  _has;
    int  _state;
}

@property (nonatomic) int bluetoothAudioDeviceCategory;
@property (nonatomic) bool hasBluetoothAudioDeviceCategory;
@property (nonatomic) bool hasState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int state;

- (int)bluetoothAudioDeviceCategory;
- (void)deleteBluetoothAudioDeviceCategory;
- (void)deleteState;
- (id)dictionaryRepresentation;
- (bool)hasBluetoothAudioDeviceCategory;
- (bool)hasState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBluetoothAudioDeviceCategory:(int)arg1;
- (void)setHasBluetoothAudioDeviceCategory:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
