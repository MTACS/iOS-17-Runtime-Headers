
@interface HREActionSetRecommendation : HRERecommendation <HREActionRecommendation> {
    NSMutableSet * _mutableActionSetBuilders;
    HFActionSetBuilder * _selectedActionSetBuilder;
    HREActionVarianceCollection * allowedVariance;
}

@property (nonatomic, readonly) NSSet *actionSetBuilders;
@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly) NSSet *addedActions;
@property (nonatomic, retain) HREActionVarianceCollection *allowedVariance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *mutableActionSetBuilders;
@property (nonatomic, retain) HFActionSetBuilder *selectedActionSetBuilder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionSetBuilders;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 allowEditingExistingActions:(bool)arg2;
- (void)addActions:(id)arg1;
- (void)addActions:(id)arg1 allowEditingExistingActions:(bool)arg2;
- (id)addedActions;
- (id)allowedVariance;
- (id)changedInvolvedObjects;
- (bool)containsMeaningfulChanges;
- (bool)containsRecommendableContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilder;
- (id)existingActionBuilder:(id)arg1 inSet:(id)arg2;
- (bool)includesObjects:(id)arg1;
- (id)initWithHome:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)involvedObjects;
- (id)mutableActionSetBuilders;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (id)selectedActionSetBuilder;
- (void)setAllowedVariance:(id)arg1;
- (void)setMutableActionSetBuilders:(id)arg1;
- (void)setSelectedActionSetBuilder:(id)arg1;

@end
