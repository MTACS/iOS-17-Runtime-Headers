
@interface SBSAPreferencesMutator : NSObject <SBSAInterfaceElementAnimationCustomizing, SBSAInterfaceElementAnimationDescribing> {
    SBSAPreferences * _preferences;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) SBSABackgroundBlurDescription *backgroundBlurDescription;
@property (getter=isBlobEnabled, nonatomic) bool blobEnabled;
@property (getter=isCollisionImminent, nonatomic) bool collisionImminent;
@property (nonatomic, copy) SBSAViewDescription *containerParentViewDescription;
@property (nonatomic, copy) NSArray *containerViewDescriptions;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } curtainRenderingConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *elementDescriptions;
@property (nonatomic, copy) SBSAElementLayoutTransition *elementLayoutTransition;
@property (nonatomic, copy) NSArray *gestureDescriptions;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } highLevelCurtainRenderingConfiguration;
@property (nonatomic, copy) SBSAElementLayoutTransition *lastChangingElementLayoutTransition;
@property (nonatomic, readonly) SBSAPreferences *preferences;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timerDescriptions;

- (void).cxx_destruct;
- (id)actions;
- (void)addMilestones:(id)arg1 forPropertyIdentity:(id)arg2;
- (id)animatedTransitionDescriptionForProperty:(id)arg1;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id)arg1 overridingExistingUnanimatedSettings:(bool)arg2 withProperty:(id)arg3 withMilestones:(id)arg4;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id)arg1 withProperty:(id)arg2 withMilestones:(id)arg3;
- (id)backgroundBlurDescription;
- (id)containerParentViewDescription;
- (id)containerViewDescriptions;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })curtainRenderingConfiguration;
- (id)description;
- (id)effectiveAnimatedTransitionDescriptionForProperty:(id)arg1;
- (id)effectiveMilestoneProvidingAnimatedTransitionDescriptionForProperty:(id)arg1;
- (id)elementDescriptions;
- (id)elementLayoutTransition;
- (id)gestureDescriptions;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })highLevelCurtainRenderingConfiguration;
- (id)initWithPreferences:(id)arg1;
- (bool)isBlobEnabled;
- (bool)isCollisionImminent;
- (id)lastChangingElementLayoutTransition;
- (id)preferences;
- (id)propertiesWithAnimatedTransitionDescriptions;
- (void)setActions:(id)arg1;
- (void)setAnimatedTransitionDescription:(id)arg1 forProperty:(id)arg2 withMilestones:(id)arg3;
- (void)setAnimatedTransitionDescription:(id)arg1 overridingExistingUnanimatedSettings:(bool)arg2 forProperty:(id)arg3 withMilestones:(id)arg4;
- (void)setBackgroundBlurDescription:(id)arg1;
- (void)setBlobEnabled:(bool)arg1;
- (void)setCollisionImminent:(bool)arg1;
- (void)setContainerParentViewDescription:(id)arg1;
- (void)setContainerViewDescriptions:(id)arg1;
- (void)setCurtainRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;
- (void)setElementDescriptions:(id)arg1;
- (void)setElementLayoutTransition:(id)arg1;
- (void)setGestureDescriptions:(id)arg1;
- (void)setHighLevelCurtainRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;
- (void)setLastChangingElementLayoutTransition:(id)arg1;
- (void)setTimerDescriptions:(id)arg1;
- (id)timerDescriptions;

@end
