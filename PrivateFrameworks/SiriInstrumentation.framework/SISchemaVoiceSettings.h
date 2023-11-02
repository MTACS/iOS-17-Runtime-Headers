
@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    struct { 
        unsigned int voiceGender : 1; 
        unsigned int voiceAccent : 1; 
    }  _has;
    bool  _hasVoiceAccentV2;
    bool  _hasVoiceName;
    int  _voiceAccent;
    SISchemaISOLocale * _voiceAccentV2;
    int  _voiceGender;
    NSString * _voiceName;
}

@property (nonatomic) bool hasVoiceAccent;
@property (nonatomic) bool hasVoiceAccentV2;
@property (nonatomic) bool hasVoiceGender;
@property (nonatomic) bool hasVoiceName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int voiceAccent;
@property (nonatomic, retain) SISchemaISOLocale *voiceAccentV2;
@property (nonatomic) int voiceGender;
@property (nonatomic, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteVoiceAccent;
- (void)deleteVoiceAccentV2;
- (void)deleteVoiceGender;
- (void)deleteVoiceName;
- (id)dictionaryRepresentation;
- (bool)hasVoiceAccent;
- (bool)hasVoiceAccentV2;
- (bool)hasVoiceGender;
- (bool)hasVoiceName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasVoiceAccent:(bool)arg1;
- (void)setHasVoiceAccentV2:(bool)arg1;
- (void)setHasVoiceGender:(bool)arg1;
- (void)setHasVoiceName:(bool)arg1;
- (void)setVoiceAccent:(int)arg1;
- (void)setVoiceAccentV2:(id)arg1;
- (void)setVoiceGender:(int)arg1;
- (void)setVoiceName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (int)voiceAccent;
- (id)voiceAccentV2;
- (int)voiceGender;
- (id)voiceName;
- (void)writeTo:(id)arg1;

@end
