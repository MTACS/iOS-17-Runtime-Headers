
@protocol SBFZStackParticipantSettings <NSObject>

@required

- (long long)activationState;
- (NSSet *)associatedBundleIdentifiersToSuppressInSystemAperture;
- (NSSet *)associatedSceneIdentifiersToSuppressInSystemAperture;
- (NSSet *)audioCategoriesDisablingVolumeHUD;
- (bool)homeAffordanceDrawingSuppressed;
- (bool)ownsHomeGesture;
- (NSArray *)physicalButtonSceneTargets;
- (bool)systemApertureSuppressedForSystemChromeSuppression;

@end
