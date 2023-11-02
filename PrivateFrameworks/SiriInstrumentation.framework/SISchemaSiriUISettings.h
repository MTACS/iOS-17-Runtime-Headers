
@interface SISchemaSiriUISettings : SISchemaInstrumentationMessage {
    bool  _alwaysBlurBackground;
    bool  _alwaysShowSiriDialog;
    bool  _alwaysShowUserSpeechTranscript;
    struct { 
        unsigned int alwaysShowUserSpeechTranscript : 1; 
        unsigned int alwaysBlurBackground : 1; 
        unsigned int alwaysShowSiriDialog : 1; 
    }  _has;
}

@property (nonatomic) bool alwaysBlurBackground;
@property (nonatomic) bool alwaysShowSiriDialog;
@property (nonatomic) bool alwaysShowUserSpeechTranscript;
@property (nonatomic) bool hasAlwaysBlurBackground;
@property (nonatomic) bool hasAlwaysShowSiriDialog;
@property (nonatomic) bool hasAlwaysShowUserSpeechTranscript;
@property (nonatomic, readonly) NSData *jsonData;

- (bool)alwaysBlurBackground;
- (bool)alwaysShowSiriDialog;
- (bool)alwaysShowUserSpeechTranscript;
- (void)deleteAlwaysBlurBackground;
- (void)deleteAlwaysShowSiriDialog;
- (void)deleteAlwaysShowUserSpeechTranscript;
- (id)dictionaryRepresentation;
- (bool)hasAlwaysBlurBackground;
- (bool)hasAlwaysShowSiriDialog;
- (bool)hasAlwaysShowUserSpeechTranscript;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlwaysBlurBackground:(bool)arg1;
- (void)setAlwaysShowSiriDialog:(bool)arg1;
- (void)setAlwaysShowUserSpeechTranscript:(bool)arg1;
- (void)setHasAlwaysBlurBackground:(bool)arg1;
- (void)setHasAlwaysShowSiriDialog:(bool)arg1;
- (void)setHasAlwaysShowUserSpeechTranscript:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
