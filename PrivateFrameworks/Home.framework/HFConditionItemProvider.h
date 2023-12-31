
@interface HFConditionItemProvider : HFItemProvider {
    NSMutableSet * _conditionItems;
    NSSet * _conditions;
    HMHome * _home;
}

@property (nonatomic, readonly) NSMutableSet *conditionItems;
@property (nonatomic, retain) NSSet *conditions;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)conditionItems;
- (id)conditions;
- (id)home;
- (id)init;
- (id)initWithConditions:(id)arg1 home:(id)arg2;
- (id)items;
- (id)reloadItems;
- (void)setConditions:(id)arg1;

@end
