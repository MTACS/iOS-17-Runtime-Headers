
@interface NTKComplicationLayout : NSObject {
    NSMutableArray * _stateLayouts;
}

+ (id)layoutWithDefaultRule:(id)arg1;

- (void).cxx_destruct;
- (id)_layoutForState:(long long)arg1;
- (id)defaultLayoutRuleForState:(long long)arg1;
- (id)init;
- (id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2;
- (void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2;
- (void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3;

@end
