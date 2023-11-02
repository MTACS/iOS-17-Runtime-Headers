
@interface HKRemoteFeatureAvailabilityRuleSet : NSObject {
    NSMutableDictionary * _conditions;
    NSSet * _supportedConditions;
}

@property (nonatomic, retain) NSMutableDictionary *conditions;
@property (nonatomic, retain) NSSet *supportedConditions;

- (void).cxx_destruct;
- (void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2;
- (id)conditions;
- (id)evaluateAll;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2 supportedConditions:(id)arg3;
- (void)setConditions:(id)arg1;
- (void)setSupportedConditions:(id)arg1;
- (id)supportedConditions;

@end
