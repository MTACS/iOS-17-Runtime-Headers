
@interface MCNetworkUsageRulesPayload : MCPayload {
    NSArray * _SIMRules;
    NSArray * _applicationRules;
}

@property (nonatomic, copy) NSArray *SIMRules;
@property (nonatomic, copy) NSArray *applicationRules;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)SIMRules;
- (id)applicationRules;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (void)setApplicationRules:(id)arg1;
- (void)setSIMRules:(id)arg1;
- (id)stubDictionary;
- (id)verboseDescription;

@end
