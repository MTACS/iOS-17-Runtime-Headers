
@interface SBSwitcherModifierStackSnapshot : NSObject {
    NSArray * _childSnapshots;
    NSString * _modifierDescription;
    NSString * _modifierName;
    SBSwitcherModifierQuerySnapshot * _querySnapshot;
}

@property (nonatomic, readonly, copy) NSArray *childSnapshots;
@property (nonatomic, readonly, copy) NSString *modifierDescription;
@property (nonatomic, readonly, copy) NSString *modifierName;
@property (nonatomic, readonly, copy) SBSwitcherModifierQuerySnapshot *querySnapshot;

- (void).cxx_destruct;
- (void)_enumerateModifierSnapshots:(id /* block */)arg1 stop:(bool*)arg2;
- (id)childSnapshots;
- (unsigned long long)countOfAllChildSnapshots;
- (void)enumerateModifierSnapshots:(id /* block */)arg1;
- (id)initWithRootModifier:(id)arg1;
- (id)modifierDescription;
- (id)modifierName;
- (id)querySnapshot;

@end
