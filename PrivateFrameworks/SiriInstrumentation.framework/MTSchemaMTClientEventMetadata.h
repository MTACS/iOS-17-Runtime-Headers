
@interface MTSchemaMTClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasMtId;
    bool  _hasSessionId;
    SISchemaUUID * _mtId;
    SISchemaUUID * _sessionId;
}

@property (nonatomic) bool hasMtId;
@property (nonatomic) bool hasSessionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *mtId;
@property (nonatomic, retain) SISchemaUUID *sessionId;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMtId;
- (void)deleteSessionId;
- (id)dictionaryRepresentation;
- (bool)hasMtId;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mtId;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasMtId:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setMtId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithMtId:(id)arg1 sessionId:(id)arg2;

@end
