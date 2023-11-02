
@interface LTSchemaLIDSpeechTranslationEvent : SISchemaInstrumentationMessage {
    LTSchemaLocaleConfidence * _alternateLocale;
    struct { 
        unsigned int responseTimeMs : 1; 
        unsigned int speechElapsedTime : 1; 
    }  _has;
    bool  _hasAlternateLocale;
    bool  _hasRequestID;
    bool  _hasSelectedLocale;
    bool  _hasUserSelectedLocale;
    NSString * _requestID;
    unsigned int  _responseTimeMs;
    LTSchemaLocaleConfidence * _selectedLocale;
    unsigned int  _speechElapsedTime;
    NSString * _userSelectedLocale;
}

@property (nonatomic, retain) LTSchemaLocaleConfidence *alternateLocale;
@property (nonatomic) bool hasAlternateLocale;
@property (nonatomic) bool hasRequestID;
@property (nonatomic) bool hasResponseTimeMs;
@property (nonatomic) bool hasSelectedLocale;
@property (nonatomic) bool hasSpeechElapsedTime;
@property (nonatomic) bool hasUserSelectedLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic, retain) LTSchemaLocaleConfidence *selectedLocale;
@property (nonatomic) unsigned int speechElapsedTime;
@property (nonatomic, copy) NSString *userSelectedLocale;

- (void).cxx_destruct;
- (id)alternateLocale;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAlternateLocale;
- (void)deleteRequestID;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (void)deleteSpeechElapsedTime;
- (void)deleteUserSelectedLocale;
- (id)dictionaryRepresentation;
- (bool)hasAlternateLocale;
- (bool)hasRequestID;
- (bool)hasResponseTimeMs;
- (bool)hasSelectedLocale;
- (bool)hasSpeechElapsedTime;
- (bool)hasUserSelectedLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (unsigned int)responseTimeMs;
- (id)selectedLocale;
- (void)setAlternateLocale:(id)arg1;
- (void)setHasAlternateLocale:(bool)arg1;
- (void)setHasRequestID:(bool)arg1;
- (void)setHasResponseTimeMs:(bool)arg1;
- (void)setHasSelectedLocale:(bool)arg1;
- (void)setHasSpeechElapsedTime:(bool)arg1;
- (void)setHasUserSelectedLocale:(bool)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseTimeMs:(unsigned int)arg1;
- (void)setSelectedLocale:(id)arg1;
- (void)setSpeechElapsedTime:(unsigned int)arg1;
- (void)setUserSelectedLocale:(id)arg1;
- (unsigned int)speechElapsedTime;
- (id)suppressMessageUnderConditions;
- (id)userSelectedLocale;
- (void)writeTo:(id)arg1;

@end
