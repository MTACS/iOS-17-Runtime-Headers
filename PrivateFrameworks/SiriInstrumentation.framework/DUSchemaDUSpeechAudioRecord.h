
@interface DUSchemaDUSpeechAudioRecord : SISchemaInstrumentationMessage {
    unsigned long long  _audioCreatedTimestampMs;
    NSString * _codec;
    struct { 
        unsigned int audioCreatedTimestampMs : 1; 
    }  _has;
    bool  _hasCodec;
    bool  _hasInteractionId;
    bool  _hasLanguage;
    bool  _hasSpeechId;
    bool  _hasSpeechIdString;
    SISchemaUUID * _interactionId;
    NSString * _language;
    SISchemaUUID * _speechId;
    NSString * _speechIdString;
}

@property (nonatomic) unsigned long long audioCreatedTimestampMs;
@property (nonatomic, copy) NSString *codec;
@property (nonatomic) bool hasAudioCreatedTimestampMs;
@property (nonatomic) bool hasCodec;
@property (nonatomic) bool hasInteractionId;
@property (nonatomic) bool hasLanguage;
@property (nonatomic) bool hasSpeechId;
@property (nonatomic) bool hasSpeechIdString;
@property (nonatomic, retain) SISchemaUUID *interactionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) SISchemaUUID *speechId;
@property (nonatomic, copy) NSString *speechIdString;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned long long)audioCreatedTimestampMs;
- (id)codec;
- (void)deleteAudioCreatedTimestampMs;
- (void)deleteCodec;
- (void)deleteInteractionId;
- (void)deleteLanguage;
- (void)deleteSpeechId;
- (void)deleteSpeechIdString;
- (id)dictionaryRepresentation;
- (bool)hasAudioCreatedTimestampMs;
- (bool)hasCodec;
- (bool)hasInteractionId;
- (bool)hasLanguage;
- (bool)hasSpeechId;
- (bool)hasSpeechIdString;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)interactionId;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)language;
- (bool)readFrom:(id)arg1;
- (void)setAudioCreatedTimestampMs:(unsigned long long)arg1;
- (void)setCodec:(id)arg1;
- (void)setHasAudioCreatedTimestampMs:(bool)arg1;
- (void)setHasCodec:(bool)arg1;
- (void)setHasInteractionId:(bool)arg1;
- (void)setHasLanguage:(bool)arg1;
- (void)setHasSpeechId:(bool)arg1;
- (void)setHasSpeechIdString:(bool)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setSpeechIdString:(id)arg1;
- (id)speechId;
- (id)speechIdString;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
