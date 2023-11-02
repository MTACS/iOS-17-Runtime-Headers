
@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage {
    NSArray * _assetSetStatus;
    struct { 
        unsigned int statusReason : 1; 
    }  _has;
    NSArray * _namespaceStatus;
    int  _statusReason;
}

@property (nonatomic, copy) NSArray *assetSetStatus;
@property (nonatomic) bool hasStatusReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *namespaceStatus;
@property (nonatomic) int statusReason;

- (void).cxx_destruct;
- (void)addAssetSetStatus:(id)arg1;
- (void)addNamespaceStatus:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assetSetStatus;
- (id)assetSetStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetSetStatusCount;
- (void)clearAssetSetStatus;
- (void)clearNamespaceStatus;
- (void)deleteAssetSetStatus;
- (void)deleteNamespaceStatus;
- (void)deleteStatusReason;
- (id)dictionaryRepresentation;
- (bool)hasStatusReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)namespaceStatus;
- (id)namespaceStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)namespaceStatusCount;
- (bool)readFrom:(id)arg1;
- (void)setAssetSetStatus:(id)arg1;
- (void)setHasStatusReason:(bool)arg1;
- (void)setNamespaceStatus:(id)arg1;
- (void)setStatusReason:(int)arg1;
- (int)statusReason;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
