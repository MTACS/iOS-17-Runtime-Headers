
@interface LCServiceApplicationConfiguration : SISchemaInstrumentationMessage {
    LCServiceLoggingParameters * _applicationParameters;
    NSArray * _blacklistedCategories;
    NSString * _bundleIdentifier;
    NSArray * _categories;
    bool  _hasApplicationParameters;
    bool  _hasBundleIdentifier;
}

@property (nonatomic, retain) LCServiceLoggingParameters *applicationParameters;
@property (nonatomic, copy) NSArray *blacklistedCategories;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic) bool hasApplicationParameters;
@property (nonatomic) bool hasBundleIdentifier;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addBlacklistedCategories:(int)arg1;
- (void)addCategories:(id)arg1;
- (id)applicationParameters;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)blacklistedCategories;
- (int)blacklistedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)blacklistedCategoriesCount;
- (id)bundleIdentifier;
- (id)categories;
- (id)categoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesCount;
- (void)clearBlacklistedCategories;
- (void)clearCategories;
- (void)deleteApplicationParameters;
- (void)deleteBlacklistedCategories;
- (void)deleteBundleIdentifier;
- (void)deleteCategories;
- (id)dictionaryRepresentation;
- (bool)hasApplicationParameters;
- (bool)hasBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApplicationParameters:(id)arg1;
- (void)setBlacklistedCategories:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setHasApplicationParameters:(bool)arg1;
- (void)setHasBundleIdentifier:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
