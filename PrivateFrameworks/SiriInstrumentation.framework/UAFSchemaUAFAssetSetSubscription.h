
@interface UAFSchemaUAFAssetSetSubscription : SISchemaInstrumentationMessage {
    NSArray * _assetSetIndices;
    NSArray * _assetSetUsages;
    bool  _hasSubscriptionName;
    NSString * _subscriptionName;
    NSArray * _usageAliases;
}

@property (nonatomic, copy) NSArray *assetSetIndices;
@property (nonatomic, copy) NSArray *assetSetUsages;
@property (nonatomic) bool hasSubscriptionName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *subscriptionName;
@property (nonatomic, copy) NSArray *usageAliases;

- (void).cxx_destruct;
- (void)addAssetSetIndices:(unsigned int)arg1;
- (void)addAssetSetUsages:(id)arg1;
- (void)addUsageAliases:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assetSetIndices;
- (unsigned int)assetSetIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetSetIndicesCount;
- (id)assetSetUsages;
- (id)assetSetUsagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetSetUsagesCount;
- (void)clearAssetSetIndices;
- (void)clearAssetSetUsages;
- (void)clearUsageAliases;
- (void)deleteAssetSetIndices;
- (void)deleteAssetSetUsages;
- (void)deleteSubscriptionName;
- (void)deleteUsageAliases;
- (id)dictionaryRepresentation;
- (bool)hasSubscriptionName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetSetIndices:(id)arg1;
- (void)setAssetSetUsages:(id)arg1;
- (void)setHasSubscriptionName:(bool)arg1;
- (void)setSubscriptionName:(id)arg1;
- (void)setUsageAliases:(id)arg1;
- (id)subscriptionName;
- (id)suppressMessageUnderConditions;
- (id)usageAliases;
- (id)usageAliasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)usageAliasesCount;
- (void)writeTo:(id)arg1;

@end
