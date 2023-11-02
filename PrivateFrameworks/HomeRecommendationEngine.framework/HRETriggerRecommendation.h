
@interface HRETriggerRecommendation : HRERecommendation <HREActionRecommendation> {
    <HFIconDescriptor> * _iconDescriptor;
    HFTriggerBuilder * _selectedTriggerBuilder;
    HREActionVarianceCollection * allowedVariance;
    NSMutableSet * mutableTriggerBuilders;
}

@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly) NSSet *addedActions;
@property (nonatomic, retain) HREActionVarianceCollection *allowedVariance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) NSMutableSet *mutableTriggerBuilders;
@property (nonatomic, retain) HFTriggerBuilder *selectedTriggerBuilder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *triggerBuilders;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 allowEditingExistingActions:(bool)arg2;
- (void)addActions:(id)arg1;
- (void)addActions:(id)arg1 allowEditingExistingActions:(bool)arg2;
- (id)addedActions;
- (id)allowedVariance;
- (id)changedInvolvedObjects;
- (id)compareForMatchingToTrigger:(id)arg1;
- (bool)containsMeaningfulChanges;
- (bool)containsRecommendableContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilder;
- (id)existingActionBuilder:(id)arg1 inSet:(id)arg2;
- (id)iconDescriptor;
- (bool)includesObjects:(id)arg1;
- (id)initWithHome:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)involvedObjects;
- (id)mutableTriggerBuilders;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)replaceTriggerBuilder:(id)arg1 withTriggerBuilder:(id)arg2 allowEditingExistingActions:(bool)arg3;
- (id)selectedTriggerBuilder;
- (void)setAllowedVariance:(id)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setMutableTriggerBuilders:(id)arg1;
- (void)setSelectedTriggerBuilder:(id)arg1;
- (id)triggerBuilders;

@end
