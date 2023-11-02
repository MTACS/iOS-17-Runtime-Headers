
@interface CAARSchemaCAARModelOutput : SISchemaInstrumentationMessage {
    NSArray * _actionModelOutputs;
}

@property (nonatomic, copy) NSArray *actionModelOutputs;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)actionModelOutputs;
- (id)actionModelOutputsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionModelOutputsCount;
- (void)addActionModelOutputs:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActionModelOutputs;
- (void)deleteActionModelOutputs;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionModelOutputs:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
