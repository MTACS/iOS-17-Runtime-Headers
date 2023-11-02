
@interface DHTSchemaDHTDeleteTrigger : SISchemaInstrumentationMessage {
    unsigned long long  _deleteTimestampMs;
    int  _deletionTriggerEvent;
    struct { 
        unsigned int deleteTimestampMs : 1; 
        unsigned int deletionTriggerEvent : 1; 
    }  _has;
    bool  _hasId;
    bool  _hasSiriDeviceId;
    bool  _hasSpeechId;
    SISchemaUUID * _id;
    SISchemaUUID * _siriDeviceId;
    SISchemaUUID * _speechId;
}

@property (nonatomic) unsigned long long deleteTimestampMs;
@property (nonatomic) int deletionTriggerEvent;
@property (nonatomic) bool hasDeleteTimestampMs;
@property (nonatomic) bool hasDeletionTriggerEvent;
@property (nonatomic) bool hasId;
@property (nonatomic) bool hasSiriDeviceId;
@property (nonatomic) bool hasSpeechId;
@property (nonatomic, retain) SISchemaUUID *id;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *siriDeviceId;
@property (nonatomic, retain) SISchemaUUID *speechId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDeleteTimestampMs;
- (void)deleteDeletionTriggerEvent;
- (void)deleteId;
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (unsigned long long)deleteTimestampMs;
- (int)deletionTriggerEvent;
- (id)dictionaryRepresentation;
- (bool)hasDeleteTimestampMs;
- (bool)hasDeletionTriggerEvent;
- (bool)hasId;
- (bool)hasSiriDeviceId;
- (bool)hasSpeechId;
- (unsigned long long)hash;
- (id)id;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDeleteTimestampMs:(unsigned long long)arg1;
- (void)setDeletionTriggerEvent:(int)arg1;
- (void)setHasDeleteTimestampMs:(bool)arg1;
- (void)setHasDeletionTriggerEvent:(bool)arg1;
- (void)setHasId:(bool)arg1;
- (void)setHasSiriDeviceId:(bool)arg1;
- (void)setHasSpeechId:(bool)arg1;
- (void)setId:(id)arg1;
- (void)setSiriDeviceId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)siriDeviceId;
- (id)speechId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
