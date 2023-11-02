
@interface SISchemaSiriVoiceTriggerSettings : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isHeySiriTriggerPhraseEnabled : 1; 
        unsigned int isJustSiriTriggerPhraseEnabled : 1; 
    }  _has;
    bool  _isHeySiriTriggerPhraseEnabled;
    bool  _isJustSiriTriggerPhraseEnabled;
}

@property (nonatomic) bool hasIsHeySiriTriggerPhraseEnabled;
@property (nonatomic) bool hasIsJustSiriTriggerPhraseEnabled;
@property (nonatomic) bool isHeySiriTriggerPhraseEnabled;
@property (nonatomic) bool isJustSiriTriggerPhraseEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsHeySiriTriggerPhraseEnabled;
- (void)deleteIsJustSiriTriggerPhraseEnabled;
- (id)dictionaryRepresentation;
- (bool)hasIsHeySiriTriggerPhraseEnabled;
- (bool)hasIsJustSiriTriggerPhraseEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHeySiriTriggerPhraseEnabled;
- (bool)isJustSiriTriggerPhraseEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsHeySiriTriggerPhraseEnabled:(bool)arg1;
- (void)setHasIsJustSiriTriggerPhraseEnabled:(bool)arg1;
- (void)setIsHeySiriTriggerPhraseEnabled:(bool)arg1;
- (void)setIsJustSiriTriggerPhraseEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
