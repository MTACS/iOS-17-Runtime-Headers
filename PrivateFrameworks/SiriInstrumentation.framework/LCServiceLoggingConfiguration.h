
@interface LCServiceLoggingConfiguration : SISchemaInstrumentationMessage {
    NSArray * _applications;
    NSArray * _blacklistedBundleIdentifiers;
    int  _configurationVersion;
    LCServiceLoggingParameters * _defaultParameters;
    NSArray * _denyListedCategories;
    struct { 
        unsigned int configurationVersion : 1; 
    }  _has;
    bool  _hasDefaultParameters;
}

@property (nonatomic, copy) NSArray *applications;
@property (nonatomic, copy) NSArray *blacklistedBundleIdentifiers;
@property (nonatomic) int configurationVersion;
@property (nonatomic, retain) LCServiceLoggingParameters *defaultParameters;
@property (nonatomic, copy) NSArray *denyListedCategories;
@property (nonatomic) bool hasConfigurationVersion;
@property (nonatomic) bool hasDefaultParameters;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addApplications:(id)arg1;
- (void)addBlacklistedBundleIdentifiers:(id)arg1;
- (void)addDenyListedCategories:(int)arg1;
- (id)applications;
- (id)applicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)blacklistedBundleIdentifiers;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (void)clearApplications;
- (void)clearBlacklistedBundleIdentifiers;
- (void)clearDenyListedCategories;
- (int)configurationVersion;
- (id)defaultParameters;
- (void)deleteApplications;
- (void)deleteBlacklistedBundleIdentifiers;
- (void)deleteConfigurationVersion;
- (void)deleteDefaultParameters;
- (void)deleteDenyListedCategories;
- (id)denyListedCategories;
- (int)denyListedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)denyListedCategoriesCount;
- (id)dictionaryRepresentation;
- (bool)hasConfigurationVersion;
- (bool)hasDefaultParameters;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setBlacklistedBundleIdentifiers:(id)arg1;
- (void)setConfigurationVersion:(int)arg1;
- (void)setDefaultParameters:(id)arg1;
- (void)setDenyListedCategories:(id)arg1;
- (void)setHasConfigurationVersion:(bool)arg1;
- (void)setHasDefaultParameters:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
