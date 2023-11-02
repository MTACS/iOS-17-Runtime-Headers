
@interface NLXSchemaCDMContextUpdateEnded : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    bool  _hasContextId;
    NSArray * _reformedTurnInputBundles;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContextId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *reformedTurnInputBundles;

- (void).cxx_destruct;
- (void)addReformedTurnInputBundles:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearReformedTurnInputBundles;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteReformedTurnInputBundles;
- (id)dictionaryRepresentation;
- (bool)hasContextId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)reformedTurnInputBundles;
- (id)reformedTurnInputBundlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reformedTurnInputBundlesCount;
- (void)setContextId:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setReformedTurnInputBundles:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
