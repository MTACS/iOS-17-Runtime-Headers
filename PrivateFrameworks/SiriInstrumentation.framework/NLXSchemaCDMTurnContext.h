
@interface NLXSchemaCDMTurnContext : SISchemaInstrumentationMessage {
    bool  _hasLegacyNlContext;
    bool  _hasNlContext;
    NLXSchemaNLXLegacyNLContext * _legacyNlContext;
    NLXSchemaCDMNLContext * _nlContext;
    unsigned long long  _whichTurncontexttype;
}

@property (nonatomic) bool hasLegacyNlContext;
@property (nonatomic) bool hasNlContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaNLXLegacyNLContext *legacyNlContext;
@property (nonatomic, retain) NLXSchemaCDMNLContext *nlContext;
@property (nonatomic, readonly) unsigned long long whichTurncontexttype;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLegacyNlContext;
- (void)deleteNlContext;
- (id)dictionaryRepresentation;
- (bool)hasLegacyNlContext;
- (bool)hasNlContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)legacyNlContext;
- (id)nlContext;
- (bool)readFrom:(id)arg1;
- (void)setHasLegacyNlContext:(bool)arg1;
- (void)setHasNlContext:(bool)arg1;
- (void)setLegacyNlContext:(id)arg1;
- (void)setNlContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichTurncontexttype;
- (void)writeTo:(id)arg1;

@end
