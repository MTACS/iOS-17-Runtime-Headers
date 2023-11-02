
@interface UAFSchemaUAFAssetUsageAlias : SISchemaInstrumentationMessage {
    NSString * _aliasName;
    NSString * _aliasValue;
    bool  _hasAliasName;
    bool  _hasAliasValue;
}

@property (nonatomic, copy) NSString *aliasName;
@property (nonatomic, copy) NSString *aliasValue;
@property (nonatomic) bool hasAliasName;
@property (nonatomic) bool hasAliasValue;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)aliasName;
- (id)aliasValue;
- (void)deleteAliasName;
- (void)deleteAliasValue;
- (id)dictionaryRepresentation;
- (bool)hasAliasName;
- (bool)hasAliasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAliasName:(id)arg1;
- (void)setAliasValue:(id)arg1;
- (void)setHasAliasName:(bool)arg1;
- (void)setHasAliasValue:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
