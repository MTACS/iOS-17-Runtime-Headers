
@interface SBFZStackParticipant : NSObject <BSDescriptionProviding, NSCopying, SBFZStackParticipantSettings> {
    long long  _activationState;
    NSSet * _associatedBundleIdentifiersToSuppressInSystemAperture;
    NSSet * _associatedSceneIdentifiersToSuppressInSystemAperture;
    NSSet * _audioCategoriesDisablingVolumeHUD;
    <SBFZStackParticipantDelegate> * _delegate;
    bool  _homeAffordanceDrawingSuppressed;
    long long  _identifier;
    bool  _ownsHomeGesture;
    NSArray * _physicalButtonSceneTargets;
    SBFZStackParticipantPreferences * _preferences;
    SBFZStackResolver * _resolver;
    bool  _systemApertureSuppressedForSystemChromeSuppression;
}

@property (nonatomic) long long activationState;
@property (nonatomic, copy) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture;
@property (nonatomic, copy) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture;
@property (nonatomic, copy) NSSet *audioCategoriesDisablingVolumeHUD;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBFZStackParticipantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeAffordanceDrawingSuppressed;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) bool ownsHomeGesture;
@property (nonatomic, copy) NSArray *physicalButtonSceneTargets;
@property (nonatomic, copy) SBFZStackParticipantPreferences *preferences;
@property (nonatomic) SBFZStackResolver *resolver;
@property (readonly) Class superclass;
@property (nonatomic) bool systemApertureSuppressedForSystemChromeSuppression;

- (void).cxx_destruct;
- (void)_updatePreferences;
- (long long)activationState;
- (id)associatedBundleIdentifiersToSuppressInSystemAperture;
- (id)associatedSceneIdentifiersToSuppressInSystemAperture;
- (id)audioCategoriesDisablingVolumeHUD;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)homeAffordanceDrawingSuppressed;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)ownsHomeGesture;
- (id)physicalButtonSceneTargets;
- (id)preferences;
- (id)resolver;
- (void)setActivationState:(long long)arg1;
- (void)setAssociatedBundleIdentifiersToSuppressInSystemAperture:(id)arg1;
- (void)setAssociatedSceneIdentifiersToSuppressInSystemAperture:(id)arg1;
- (void)setAudioCategoriesDisablingVolumeHUD:(id)arg1;
- (void)setHomeAffordanceDrawingSuppressed:(bool)arg1;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1;
- (void)setOwnsHomeGesture:(bool)arg1;
- (void)setPhysicalButtonSceneTargets:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setResolver:(id)arg1;
- (void)setSystemApertureSuppressedForSystemChromeSuppression:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)systemApertureSuppressedForSystemChromeSuppression;

@end
