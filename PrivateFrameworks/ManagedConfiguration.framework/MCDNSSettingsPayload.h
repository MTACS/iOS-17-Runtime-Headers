
@interface MCDNSSettingsPayload : MCPayload {
    NSDictionary * _dnsSettings;
    NSArray * _onDemandRules;
    NSNumber * _prohibitDisablement;
}

@property (nonatomic, readonly, copy) NSDictionary *configurationDictionary;
@property (nonatomic, readonly, copy) NSDictionary *dnsSettings;
@property (nonatomic, readonly, copy) NSArray *onDemandRules;
@property (nonatomic, readonly, copy) NSNumber *prohibitDisablement;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)configurationDictionary;
- (id)dnsSettings;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)onDemandRules;
- (id)payloadDescriptionKeyValueSections;
- (id)prohibitDisablement;
- (id)stubDictionary;
- (id)verboseDescription;

@end
