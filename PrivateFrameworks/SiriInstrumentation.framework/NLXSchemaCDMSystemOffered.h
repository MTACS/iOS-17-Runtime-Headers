
@interface NLXSchemaCDMSystemOffered : SISchemaInstrumentationMessage {
    bool  _hasOfferedAct;
    NLXSchemaCDMUserDialogAct * _offeredAct;
}

@property (nonatomic) bool hasOfferedAct;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMUserDialogAct *offeredAct;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOfferedAct;
- (id)dictionaryRepresentation;
- (bool)hasOfferedAct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)offeredAct;
- (bool)readFrom:(id)arg1;
- (void)setHasOfferedAct:(bool)arg1;
- (void)setOfferedAct:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
