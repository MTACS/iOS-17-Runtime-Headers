
@interface MCFeatureFlagsPayload : MCPayload {
    unsigned long long  _disclosureCount;
    unsigned long long  _featureFlagCount;
    NSDictionary * _featureFlagsConfiguration;
}

@property (nonatomic, readonly) unsigned long long disclosureCount;
@property (nonatomic, readonly) unsigned long long featureFlagCount;
@property (nonatomic, readonly) NSDictionary *featureFlagsConfiguration;

+ (bool)isConfigurationValid:(id)arg1 error:(id*)arg2;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (unsigned long long)disclosureCount;
- (unsigned long long)featureFlagCount;
- (id)featureFlagsConfiguration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)invalidConfigurationErrorWithUnderlyingError:(id)arg1;
- (bool)isAllowedToWriteFeatureFlags;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)title;
- (id)verboseDescription;

@end
