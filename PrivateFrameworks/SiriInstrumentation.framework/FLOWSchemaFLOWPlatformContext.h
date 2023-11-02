
@interface FLOWSchemaFLOWPlatformContext : SISchemaInstrumentationMessage {
    FLOWSchemaFLOWEntityContext * _entityContext;
    FLOWSchemaFLOWEntityContext * _entityContextValue;
    bool  _hasEntityContext;
    bool  _hasEntityContextValue;
    unsigned long long  _whichPlatformcontext;
}

@property (nonatomic, retain) FLOWSchemaFLOWEntityContext *entityContext;
@property (nonatomic, retain) FLOWSchemaFLOWEntityContext *entityContextValue;
@property (nonatomic) bool hasEntityContext;
@property (nonatomic) bool hasEntityContextValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichPlatformcontext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEntityContext;
- (void)deleteEntityContextValue;
- (id)dictionaryRepresentation;
- (id)entityContext;
- (id)entityContextValue;
- (bool)hasEntityContext;
- (bool)hasEntityContextValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityContext:(id)arg1;
- (void)setEntityContextValue:(id)arg1;
- (void)setHasEntityContext:(bool)arg1;
- (void)setHasEntityContextValue:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichPlatformcontext;
- (void)writeTo:(id)arg1;

@end
