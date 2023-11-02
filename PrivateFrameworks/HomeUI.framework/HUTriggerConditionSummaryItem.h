
@interface HUTriggerConditionSummaryItem : HFItem {
    NSArray * _conditions;
    HMHome * _home;
}

@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)conditions;
- (id)home;
- (id)initWithConditions:(id)arg1 home:(id)arg2;

@end
