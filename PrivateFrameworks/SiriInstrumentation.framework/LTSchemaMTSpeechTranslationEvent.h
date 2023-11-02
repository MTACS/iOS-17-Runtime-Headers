
@interface LTSchemaMTSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { 
        unsigned int responseTimeMs : 1; 
    }  _has;
    bool  _hasRequestID;
    bool  _hasSelectedLocale;
    NSString * _requestID;
    int  _responseTimeMs;
    NSString * _selectedLocale;
}

@property (nonatomic) bool hasRequestID;
@property (nonatomic) bool hasResponseTimeMs;
@property (nonatomic) bool hasSelectedLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic) int responseTimeMs;
@property (nonatomic, copy) NSString *selectedLocale;

- (void).cxx_destruct;
- (void)deleteRequestID;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (id)dictionaryRepresentation;
- (bool)hasRequestID;
- (bool)hasResponseTimeMs;
- (bool)hasSelectedLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (int)responseTimeMs;
- (id)selectedLocale;
- (void)setHasRequestID:(bool)arg1;
- (void)setHasResponseTimeMs:(bool)arg1;
- (void)setHasSelectedLocale:(bool)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseTimeMs:(int)arg1;
- (void)setSelectedLocale:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
