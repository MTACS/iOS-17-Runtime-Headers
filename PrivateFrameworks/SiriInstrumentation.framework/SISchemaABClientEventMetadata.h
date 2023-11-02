
@interface SISchemaABClientEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timeIntervalSince1970 : 1; 
    }  _has;
    bool  _hasSiriDeviceId;
    bool  _hasSpeechId;
    SISchemaUUID * _siriDeviceId;
    SISchemaUUID * _speechId;
    double  _timeIntervalSince1970;
}

@property (nonatomic) bool hasSiriDeviceId;
@property (nonatomic) bool hasSpeechId;
@property (nonatomic) bool hasTimeIntervalSince1970;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *siriDeviceId;
@property (nonatomic, retain) SISchemaUUID *speechId;
@property (nonatomic) double timeIntervalSince1970;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (void)deleteTimeIntervalSince1970;
- (id)dictionaryRepresentation;
- (bool)hasSiriDeviceId;
- (bool)hasSpeechId;
- (bool)hasTimeIntervalSince1970;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriDeviceId:(bool)arg1;
- (void)setHasSpeechId:(bool)arg1;
- (void)setHasTimeIntervalSince1970:(bool)arg1;
- (void)setSiriDeviceId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (id)siriDeviceId;
- (id)speechId;
- (id)suppressMessageUnderConditions;
- (double)timeIntervalSince1970;
- (void)writeTo:(id)arg1;

@end
