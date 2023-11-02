
@interface PKPaymentPassActionBundle : NSObject {
    NSArray * _actionGroups;
    NSArray * _actions;
}

@property (nonatomic, retain) NSArray *actionGroups;
@property (nonatomic, retain) NSArray *actions;

- (void).cxx_destruct;
- (id)actionGroups;
- (id)actions;
- (id)actionsMatchingTypes:(id)arg1;
- (void)setActionGroups:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setOrAddActionGroups:(id)arg1;
- (void)setOrAddActions:(id)arg1;

@end
