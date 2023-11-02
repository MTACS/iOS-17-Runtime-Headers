
@interface MTSchemaMTInvocationFailed : SISchemaInstrumentationMessage {
    MTSchemaMTError * _error;
    bool  _hasError;
    bool  _hasQssSessionId;
    SISchemaUUID * _qssSessionId;
}

@property (nonatomic, retain) MTSchemaMTError *error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasQssSessionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *qssSessionId;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteError;
- (void)deleteQssSessionId;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasQssSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qssSessionId;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasQssSessionId:(bool)arg1;
- (void)setQssSessionId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithWithError:(id)arg1 qssSessionId:(id)arg2;

@end
