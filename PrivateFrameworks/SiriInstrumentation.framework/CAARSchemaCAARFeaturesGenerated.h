
@interface CAARSchemaCAARFeaturesGenerated : SISchemaInstrumentationMessage {
    NSArray * _actionFeatureSets;
}

@property (nonatomic, copy) NSArray *actionFeatureSets;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)actionFeatureSets;
- (id)actionFeatureSetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionFeatureSetsCount;
- (void)addActionFeatureSets:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActionFeatureSets;
- (void)deleteActionFeatureSets;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionFeatureSets:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
