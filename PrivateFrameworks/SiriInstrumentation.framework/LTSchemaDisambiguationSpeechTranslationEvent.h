
@interface LTSchemaDisambiguationSpeechTranslationEvent : SISchemaInstrumentationMessage {
    bool  _hasRequestID;
    bool  _hasSenseID;
    bool  _hasSourceLocale;
    NSString * _requestID;
    NSString * _senseID;
    NSString * _sourceLocale;
}

@property (nonatomic) bool hasRequestID;
@property (nonatomic) bool hasSenseID;
@property (nonatomic) bool hasSourceLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) NSString *senseID;
@property (nonatomic, copy) NSString *sourceLocale;

- (void).cxx_destruct;
- (void)deleteRequestID;
- (void)deleteSenseID;
- (void)deleteSourceLocale;
- (id)dictionaryRepresentation;
- (bool)hasRequestID;
- (bool)hasSenseID;
- (bool)hasSourceLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (id)senseID;
- (void)setHasRequestID:(bool)arg1;
- (void)setHasSenseID:(bool)arg1;
- (void)setHasSourceLocale:(bool)arg1;
- (void)setRequestID:(id)arg1;
- (void)setSenseID:(id)arg1;
- (void)setSourceLocale:(id)arg1;
- (id)sourceLocale;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
