
@interface HREContextActionRecommendation : HRERecommendation <HREActionRecommendation> {
    NSMutableSet * __actions;
    <HFIconDescriptor> * _iconDescriptor;
    NSString * _name;
    HREActionVarianceCollection * allowedVariance;
}

@property (nonatomic, retain) NSMutableSet *_actions;
@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly) NSSet *addedActions;
@property (nonatomic, retain) HREActionVarianceCollection *allowedVariance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actions;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 allowEditingExistingActions:(bool)arg2;
- (void)addActions:(id)arg1;
- (void)addActions:(id)arg1 allowEditingExistingActions:(bool)arg2;
- (id)addedActions;
- (id)allowedVariance;
- (bool)containsMeaningfulChanges;
- (bool)containsRecommendableContent;
- (id)copyWithActionFilter:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilder;
- (id)executeActions;
- (id)iconDescriptor;
- (id)initWithHome:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)name;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)setAllowedVariance:(id)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setName:(id)arg1;
- (void)set_actions:(id)arg1;

@end
