
@interface MTSchemaMTAppNextButtonTappedTier1 : SISchemaInstrumentationMessage {
    bool  _hasLocalePair;
    bool  _hasTranslationPayload;
    MTSchemaMTLocalePair * _localePair;
    NSString * _translationPayload;
}

@property (nonatomic) bool hasLocalePair;
@property (nonatomic) bool hasTranslationPayload;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MTSchemaMTLocalePair *localePair;
@property (nonatomic, copy) NSString *translationPayload;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLocalePair;
- (void)deleteTranslationPayload;
- (id)dictionaryRepresentation;
- (bool)hasLocalePair;
- (bool)hasTranslationPayload;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localePair;
- (bool)readFrom:(id)arg1;
- (void)setHasLocalePair:(bool)arg1;
- (void)setHasTranslationPayload:(bool)arg1;
- (void)setLocalePair:(id)arg1;
- (void)setTranslationPayload:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)translationPayload;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithPayload:(id)arg1 localePair:(id)arg2;

@end
