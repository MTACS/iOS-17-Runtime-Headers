
@interface SBSAElementContentProvider : SBSABasePreferencesProvider {
    <SBSAInterfaceElementPropertyIdentifying> * _pendingSensorObscuringShadowProperty;
    bool  _sensorObscuringShadowDisappearingIfTransitioning;
    SBSAElementLayoutTransition * _staticLayoutTransition;
    long long  _transitionDirection;
}

@property (nonatomic, readonly, copy) SBSAElementLayoutTransition *staticLayoutTransition;
@property (nonatomic, readonly) long long transitionDirection;

+ (id)appearanceTransitionElementContentProviderWithParentProvider:(id)arg1 staticLayoutTransition:(id)arg2;
+ (id)disappearanceTransitionElementContentProviderWithParentProvider:(id)arg1 staticLayoutTransition:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithParentProvider:(id)arg1 transitionDirection:(long long)arg2 staticLayoutTransition:(id)arg3;
- (double)_sensorObscuringShadowApexMilestone;
- (id)_updatedElementDescriptionFromDescription:(id)arg1 layoutTransition:(id)arg2 transitionDescriptions:(id)arg3 context:(id)arg4;
- (id)defaultTransitionSettings;
- (id)description;
- (id)initWithParentProvider:(id)arg1;
- (id)preferencesFromContext:(id)arg1;
- (id)staticLayoutTransition;
- (long long)transitionDirection;

@end
