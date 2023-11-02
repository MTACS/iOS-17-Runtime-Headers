
@interface SISchemaABSeverEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timestampNs : 1; 
    }  _has;
    bool  _hasSiriDeviceId;
    bool  _hasSpeechId;
    SISchemaUUID * _siriDeviceId;
    SISchemaUUID * _speechId;
    long long  _timestampNs;
}

@property (nonatomic) bool hasSiriDeviceId;
@property (nonatomic) bool hasSpeechId;
@property (nonatomic) bool hasTimestampNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *siriDeviceId;
@property (nonatomic, retain) SISchemaUUID *speechId;
@property (nonatomic) long long timestampNs;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (void)deleteTimestampNs;
- (id)dictionaryRepresentation;
- (bool)hasSiriDeviceId;
- (bool)hasSpeechId;
- (bool)hasTimestampNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriDeviceId:(bool)arg1;
- (void)setHasSpeechId:(bool)arg1;
- (void)setHasTimestampNs:(bool)arg1;
- (void)setSiriDeviceId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setTimestampNs:(long long)arg1;
- (id)siriDeviceId;
- (id)speechId;
- (id)suppressMessageUnderConditions;
- (long long)timestampNs;
- (void)writeTo:(id)arg1;

@end
