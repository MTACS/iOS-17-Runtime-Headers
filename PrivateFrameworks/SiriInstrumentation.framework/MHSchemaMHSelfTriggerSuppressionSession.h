
@interface MHSchemaMHSelfTriggerSuppressionSession : SISchemaInstrumentationMessage {
    int  _audioSource;
    struct { 
        unsigned int numSelfTriggersDetectedInSession : 1; 
        unsigned int sessionDurationInSeconds : 1; 
        unsigned int audioSource : 1; 
        unsigned int isBluetoothSpeakerActive : 1; 
        unsigned int isBuiltInSpeakerActive : 1; 
    }  _has;
    bool  _isBluetoothSpeakerActive;
    bool  _isBuiltInSpeakerActive;
    unsigned int  _numSelfTriggersDetectedInSession;
    double  _sessionDurationInSeconds;
}

@property (nonatomic) int audioSource;
@property (nonatomic) bool hasAudioSource;
@property (nonatomic) bool hasIsBluetoothSpeakerActive;
@property (nonatomic) bool hasIsBuiltInSpeakerActive;
@property (nonatomic) bool hasNumSelfTriggersDetectedInSession;
@property (nonatomic) bool hasSessionDurationInSeconds;
@property (nonatomic) bool isBluetoothSpeakerActive;
@property (nonatomic) bool isBuiltInSpeakerActive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numSelfTriggersDetectedInSession;
@property (nonatomic) double sessionDurationInSeconds;

- (int)audioSource;
- (void)deleteAudioSource;
- (void)deleteIsBluetoothSpeakerActive;
- (void)deleteIsBuiltInSpeakerActive;
- (void)deleteNumSelfTriggersDetectedInSession;
- (void)deleteSessionDurationInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasAudioSource;
- (bool)hasIsBluetoothSpeakerActive;
- (bool)hasIsBuiltInSpeakerActive;
- (bool)hasNumSelfTriggersDetectedInSession;
- (bool)hasSessionDurationInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isBluetoothSpeakerActive;
- (bool)isBuiltInSpeakerActive;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numSelfTriggersDetectedInSession;
- (bool)readFrom:(id)arg1;
- (double)sessionDurationInSeconds;
- (void)setAudioSource:(int)arg1;
- (void)setHasAudioSource:(bool)arg1;
- (void)setHasIsBluetoothSpeakerActive:(bool)arg1;
- (void)setHasIsBuiltInSpeakerActive:(bool)arg1;
- (void)setHasNumSelfTriggersDetectedInSession:(bool)arg1;
- (void)setHasSessionDurationInSeconds:(bool)arg1;
- (void)setIsBluetoothSpeakerActive:(bool)arg1;
- (void)setIsBuiltInSpeakerActive:(bool)arg1;
- (void)setNumSelfTriggersDetectedInSession:(unsigned int)arg1;
- (void)setSessionDurationInSeconds:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
