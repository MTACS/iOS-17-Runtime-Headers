
@interface SMTSchemaSMTAppLanguageModelProfileRebuildStarted : SISchemaInstrumentationMessage {
    NSString * _appBundleId;
    bool  _hasAppBundleId;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic) bool hasAppBundleId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAppBundleId;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setHasAppBundleId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
