
@interface _NTKComplicationStateLayout : NSObject {
    NTKComplicationLayoutRule * _defaultRule;
    NSMutableDictionary * _overrideRules;
}

@property (nonatomic, retain) NTKComplicationLayoutRule *defaultRule;

- (void).cxx_destruct;
- (id)defaultRule;
- (id)ruleForLayoutOverride:(long long)arg1;
- (void)setDefaultRule:(id)arg1;
- (void)setRule:(id)arg1 forLayoutOverride:(long long)arg2;

@end
