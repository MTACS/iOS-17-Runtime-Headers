
@interface SBFZStackParticipantPreferences : NSObject <BSDescriptionProviding, NSCopying> {
    long long  _activationPolicyForParticipantsBelow;
    NSIndexSet * _assertIsAboveParticipantIdentifiers;
    NSSet * _associatedBundleIdentifiersToSuppressInSystemAperture;
    NSSet * _associatedSceneIdentifiersToSuppressInSystemAperture;
    NSSet * _audioCategoriesDisablingVolumeHUD;
    long long  _homeAffordanceDrawingSuppression;
    long long  _homeGestureConsumption;
    NSArray * _physicalButtonSceneTargets;
    bool  _suppressSystemApertureForSystemChromeSuppression;
}

@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (nonatomic, copy) NSIndexSet *assertIsAboveParticipantIdentifiers;
@property (nonatomic, copy) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture;
@property (nonatomic, copy) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture;
@property (nonatomic, copy) NSSet *audioCategoriesDisablingVolumeHUD;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeAffordanceDrawingSuppression;
@property (nonatomic) long long homeGestureConsumption;
@property (nonatomic, copy) NSArray *physicalButtonSceneTargets;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressSystemApertureForSystemChromeSuppression;

- (void).cxx_destruct;
- (long long)activationPolicyForParticipantsBelow;
- (id)assertIsAboveParticipantIdentifiers;
- (id)associatedBundleIdentifiersToSuppressInSystemAperture;
- (id)associatedSceneIdentifiersToSuppressInSystemAperture;
- (id)audioCategoriesDisablingVolumeHUD;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)homeAffordanceDrawingSuppression;
- (long long)homeGestureConsumption;
- (id)initInternal;
- (bool)isEqual:(id)arg1;
- (id)physicalButtonSceneTargets;
- (void)setActivationPolicyForParticipantsBelow:(long long)arg1;
- (void)setAssertIsAboveParticipantIdentifiers:(id)arg1;
- (void)setAssociatedBundleIdentifiersToSuppressInSystemAperture:(id)arg1;
- (void)setAssociatedSceneIdentifiersToSuppressInSystemAperture:(id)arg1;
- (void)setAudioCategoriesDisablingVolumeHUD:(id)arg1;
- (void)setHomeAffordanceDrawingSuppression:(long long)arg1;
- (void)setHomeGestureConsumption:(long long)arg1;
- (void)setPhysicalButtonSceneTargets:(id)arg1;
- (void)setSuppressSystemApertureForSystemChromeSuppression:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressSystemApertureForSystemChromeSuppression;

@end
