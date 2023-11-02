
@interface UAFSchemaUAFAssetSetUsage : SISchemaInstrumentationMessage {
    bool  _hasUsageName;
    bool  _hasUsageValue;
    NSString * _usageName;
    NSString * _usageValue;
}

@property (nonatomic) bool hasUsageName;
@property (nonatomic) bool hasUsageValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *usageName;
@property (nonatomic, copy) NSString *usageValue;

- (void).cxx_destruct;
- (void)deleteUsageName;
- (void)deleteUsageValue;
- (id)dictionaryRepresentation;
- (bool)hasUsageName;
- (bool)hasUsageValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUsageName:(bool)arg1;
- (void)setHasUsageValue:(bool)arg1;
- (void)setUsageName:(id)arg1;
- (void)setUsageValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)usageName;
- (id)usageValue;
- (void)writeTo:(id)arg1;

@end
