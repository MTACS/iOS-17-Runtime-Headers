
@interface SISchemaUEIDictationVoiceCommandExecuted : SISchemaInstrumentationMessage {
    unsigned long long  _commandPayloadCharacterCount;
    unsigned long long  _commandPayloadWordCount;
    int  _commandStatus;
    unsigned long long  _commandTargetCharacterCount;
    unsigned long long  _commandTargetWordCount;
    int  _commandType;
    struct { 
        unsigned int commandStatus : 1; 
        unsigned int commandType : 1; 
        unsigned int commandTargetWordCount : 1; 
        unsigned int commandPayloadWordCount : 1; 
        unsigned int commandTargetCharacterCount : 1; 
        unsigned int commandPayloadCharacterCount : 1; 
    }  _has;
    bool  _hasVoiceCommandId;
    SISchemaUUID * _voiceCommandId;
}

@property (nonatomic) unsigned long long commandPayloadCharacterCount;
@property (nonatomic) unsigned long long commandPayloadWordCount;
@property (nonatomic) int commandStatus;
@property (nonatomic) unsigned long long commandTargetCharacterCount;
@property (nonatomic) unsigned long long commandTargetWordCount;
@property (nonatomic) int commandType;
@property (nonatomic) bool hasCommandPayloadCharacterCount;
@property (nonatomic) bool hasCommandPayloadWordCount;
@property (nonatomic) bool hasCommandStatus;
@property (nonatomic) bool hasCommandTargetCharacterCount;
@property (nonatomic) bool hasCommandTargetWordCount;
@property (nonatomic) bool hasCommandType;
@property (nonatomic) bool hasVoiceCommandId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *voiceCommandId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned long long)commandPayloadCharacterCount;
- (unsigned long long)commandPayloadWordCount;
- (int)commandStatus;
- (unsigned long long)commandTargetCharacterCount;
- (unsigned long long)commandTargetWordCount;
- (int)commandType;
- (void)deleteCommandPayloadCharacterCount;
- (void)deleteCommandPayloadWordCount;
- (void)deleteCommandStatus;
- (void)deleteCommandTargetCharacterCount;
- (void)deleteCommandTargetWordCount;
- (void)deleteCommandType;
- (void)deleteVoiceCommandId;
- (id)dictionaryRepresentation;
- (bool)hasCommandPayloadCharacterCount;
- (bool)hasCommandPayloadWordCount;
- (bool)hasCommandStatus;
- (bool)hasCommandTargetCharacterCount;
- (bool)hasCommandTargetWordCount;
- (bool)hasCommandType;
- (bool)hasVoiceCommandId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommandPayloadCharacterCount:(unsigned long long)arg1;
- (void)setCommandPayloadWordCount:(unsigned long long)arg1;
- (void)setCommandStatus:(int)arg1;
- (void)setCommandTargetCharacterCount:(unsigned long long)arg1;
- (void)setCommandTargetWordCount:(unsigned long long)arg1;
- (void)setCommandType:(int)arg1;
- (void)setHasCommandPayloadCharacterCount:(bool)arg1;
- (void)setHasCommandPayloadWordCount:(bool)arg1;
- (void)setHasCommandStatus:(bool)arg1;
- (void)setHasCommandTargetCharacterCount:(bool)arg1;
- (void)setHasCommandTargetWordCount:(bool)arg1;
- (void)setHasCommandType:(bool)arg1;
- (void)setHasVoiceCommandId:(bool)arg1;
- (void)setVoiceCommandId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceCommandId;
- (void)writeTo:(id)arg1;

@end
