
@interface HDHealthRecordRuleset : NSObject {
    NSString * _FHIRRelease;
    NSDictionary * _rulesByClinicalType;
    NSDictionary * _rulesByResourceType;
    NSNumber * _rulesetVersion;
}

@property (nonatomic, readonly, copy) NSString *FHIRRelease;
@property (nonatomic, readonly, copy) HRSSupportedFHIRRelease *releaseSupport;
@property (nonatomic, copy) NSDictionary *rulesByClinicalType;
@property (nonatomic, copy) NSDictionary *rulesByResourceType;
@property (nonatomic, readonly, copy) NSNumber *rulesetVersion;

+ (id)rulesetFromDictionary:(id)arg1 rulesetVersion:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)FHIRRelease;
- (id)initForFHIRRelease:(id)arg1 rulesetVersion:(id)arg2;
- (id)releaseSupport;
- (id)rulesByClinicalType;
- (id)rulesByResourceType;
- (id)rulesetForClinicalType:(long long)arg1;
- (id)rulesetForFHIRResourceObject:(id)arg1;
- (id)rulesetForFHIRResourceType:(id)arg1;
- (id)rulesetVersion;
- (void)setRulesByClinicalType:(id)arg1;
- (void)setRulesByResourceType:(id)arg1;

@end
