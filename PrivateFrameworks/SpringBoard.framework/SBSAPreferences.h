
@interface SBSAPreferences : NSObject <NSCopying, SBSABlockMutating, SBSADictionaryDescribable, SBSAInterfaceElementAnimationDescribing, SBSAPreferencesRepresenting> {
    NSArray * _actions;
    SBSABackgroundBlurDescription * _backgroundBlurDescription;
    bool  _blobEnabled;
    bool  _collisionImminent;
    SBSAViewDescription * _containerParentViewDescription;
    NSArray * _containerViewDescriptions;
    struct SBSystemApertureContainerRenderingConfiguration { 
        long long renderingStyle; 
        long long cloningStyle; 
    }  _curtainRenderingConfiguration;
    NSArray * _elementDescriptions;
    SBSAElementLayoutTransition * _elementLayoutTransition;
    bool  _finalizedForApplication;
    NSArray * _gestureDescriptions;
    struct SBSystemApertureContainerRenderingConfiguration { 
        long long renderingStyle; 
        long long cloningStyle; 
    }  _highLevelCurtainRenderingConfiguration;
    NSMutableDictionary * _interfaceElementPropertiesToBehaviorSettings;
    NSMutableDictionary * _interfaceElementPropertiesToMilestones;
    SBSAElementLayoutTransition * _lastChangingElementLayoutTransition;
    NSArray * _timerDescriptions;
}

@property (setter=_setActions:, nonatomic, copy) NSArray *actions;
@property (setter=_setBackgroundBlurDescription:, nonatomic, copy) SBSABackgroundBlurDescription *backgroundBlurDescription;
@property (getter=isBlobEnabled, setter=_setBlobEnabled:, nonatomic) bool blobEnabled;
@property (getter=isCollisionImminent, setter=_setCollisionImminent:, nonatomic) bool collisionImminent;
@property (setter=_setContainerParentViewDescription:, nonatomic, copy) SBSAViewDescription *containerParentViewDescription;
@property (setter=_setContainerViewDescriptions:, nonatomic, copy) NSArray *containerViewDescriptions;
@property (setter=_setCurtainRenderingConfiguration:, nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } curtainRenderingConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) BSOrderedDictionary *dictionaryDescription;
@property (setter=_setElementDescriptions:, nonatomic, copy) NSArray *elementDescriptions;
@property (setter=_setElementLayoutTransition:, nonatomic, copy) SBSAElementLayoutTransition *elementLayoutTransition;
@property (setter=_setGestureDescriptions:, nonatomic, copy) NSArray *gestureDescriptions;
@property (readonly) unsigned long long hash;
@property (setter=_setHighLevelCurtainRenderingConfiguration:, nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } highLevelCurtainRenderingConfiguration;
@property (getter=_interfaceElementPropertiesToBehaviorSettings, setter=_setInterfaceElementPropertiesToBehaviorSettings:, nonatomic, retain) NSMutableDictionary *interfaceElementPropertiesToBehaviorSettings;
@property (getter=_interfaceElementPropertiesToMilestones, setter=_setInterfaceElementPropertiesToMilestones:, nonatomic, retain) NSMutableDictionary *interfaceElementPropertiesToMilestones;
@property (setter=_setLastChangingElementLayoutTransition:, nonatomic, copy) SBSAElementLayoutTransition *lastChangingElementLayoutTransition;
@property (nonatomic, readonly, copy) NSArray *propertiesWithAnimatedTransitionDescriptions;
@property (readonly) Class superclass;
@property (setter=_setTimerDescriptions:, nonatomic, copy) NSArray *timerDescriptions;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (bool)_doesUnanimatedTransitionDescriptionExistForProperty:(id)arg1;
- (id)_effectiveTransitionDescriptionForPropertyForProperty:(id)arg1 addingMilestonesAndCreatingUniqueDescriptionIfIndirect:(bool)arg2;
- (id)_interfaceElementPropertiesToBehaviorSettings;
- (id)_interfaceElementPropertiesToMilestones;
- (void)_setActions:(id)arg1;
- (void)_setBackgroundBlurDescription:(id)arg1;
- (void)_setBlobEnabled:(bool)arg1;
- (void)_setCollisionImminent:(bool)arg1;
- (void)_setContainerParentViewDescription:(id)arg1;
- (void)_setContainerViewDescriptions:(id)arg1;
- (void)_setCurtainRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;
- (void)_setElementDescriptions:(id)arg1;
- (void)_setElementLayoutTransition:(id)arg1;
- (void)_setGestureDescriptions:(id)arg1;
- (void)_setHighLevelCurtainRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;
- (void)_setInterfaceElementPropertiesToBehaviorSettings:(id)arg1;
- (void)_setInterfaceElementPropertiesToMilestones:(id)arg1;
- (void)_setLastChangingElementLayoutTransition:(id)arg1;
- (void)_setTimerDescriptions:(id)arg1;
- (id)actions;
- (id)animatedTransitionDescriptionForProperty:(id)arg1;
- (id)backgroundBlurDescription;
- (id)containerParentViewDescription;
- (id)containerViewDescriptions;
- (id)copyByAddingActions:(id)arg1;
- (id)copyByUpdatingBackgroundBlurDescription:(id)arg1;
- (id)copyByUpdatingContainerViewDescriptions:(id)arg1;
- (id)copyByUpdatingElementDescriptions:(id)arg1;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithCancellationOfGestureOfClass:(Class)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })curtainRenderingConfiguration;
- (id)description;
- (id)dictionaryDescription;
- (id)effectiveAnimatedTransitionDescriptionForProperty:(id)arg1;
- (id)effectiveMilestoneProvidingAnimatedTransitionDescriptionForProperty:(id)arg1;
- (id)elementDescriptions;
- (id)elementLayoutTransition;
- (void)finalizePreferencesForApplication:(id)arg1;
- (id)gestureDescriptions;
- (unsigned long long)hash;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })highLevelCurtainRenderingConfiguration;
- (bool)isBlobEnabled;
- (bool)isCollisionImminent;
- (bool)isEqual:(id)arg1;
- (id)lastChangingElementLayoutTransition;
- (id)propertiesWithAnimatedTransitionDescriptions;
- (id)timerDescriptions;

@end
