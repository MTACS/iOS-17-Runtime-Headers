
@interface UAFSchemaUAFAssetSetStatus : SISchemaInstrumentationMessage {
    NSArray * _uafAssetSets;
    NSArray * _uafAssetSubscriptions;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *uafAssetSets;
@property (nonatomic, copy) NSArray *uafAssetSubscriptions;

- (void).cxx_destruct;
- (void)addUafAssetSets:(id)arg1;
- (void)addUafAssetSubscriptions:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearUafAssetSets;
- (void)clearUafAssetSubscriptions;
- (void)deleteUafAssetSets;
- (void)deleteUafAssetSubscriptions;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setUafAssetSets:(id)arg1;
- (void)setUafAssetSubscriptions:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)uafAssetSets;
- (id)uafAssetSetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uafAssetSetsCount;
- (id)uafAssetSubscriptions;
- (id)uafAssetSubscriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uafAssetSubscriptionsCount;
- (void)writeTo:(id)arg1;

@end
