
@interface HKRemoteFeatureAvailabilityCompoundRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString * _grouping;
    NSMutableArray * _rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *grouping;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *rules;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (bool)evaluate;
- (id)grouping;
- (void)processUserInfo:(id)arg1;
- (id)rules;
- (void)setGrouping:(id)arg1;
- (void)setRules:(id)arg1;

@end
