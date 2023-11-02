
@interface SBUICoronaAnimationController : NSObject {
    NSHashTable * _participants;
    UIViewPropertyAnimator * _propertyAnimator;
}

@property (getter=_propertyAnimator, setter=_setPropertyAnimator:, nonatomic, retain) UIViewPropertyAnimator *propertyAnimator;

+ (id)animationSettingsForTransitionToStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_configurePropertyAnimatorIfNecessaryForChangeToUserInterfaceStyle:(long long)arg1;
- (id)_propertyAnimator;
- (void)_setPropertyAnimator:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)coronaDidChange:(long long)arg1;
- (void)removeParticipant:(id)arg1;

@end
