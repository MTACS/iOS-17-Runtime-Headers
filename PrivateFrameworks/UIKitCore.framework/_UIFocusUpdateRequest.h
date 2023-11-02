
@interface _UIFocusUpdateRequest : NSObject <NSCopying, _UIFocusUpdateRequesting> {
    bool  _allowsDeferral;
    bool  _allowsFocusingCurrentItem;
    bool  _allowsOverridingPreferedFocusEnvironments;
    UIFocusAnimationCoordinator * _animationCoordinator;
    <UIFocusEnvironment> * _environment;
    UIFocusSystem * _focusSystem;
    bool  _isFocusRemovalRequest;
    bool  _scrollIfNecessary;
    bool  _shouldPlayFocusSound;
}

@property (nonatomic) bool allowsDeferral;
@property (nonatomic) bool allowsFocusingCurrentItem;
@property (nonatomic) bool allowsOverridingPreferedFocusEnvironments;
@property (nonatomic, retain) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIFocusEnvironment> *environment;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, readonly) bool isFocusRemovalRequest;
@property (getter=isMovementRequest, nonatomic, readonly) bool movementRequest;
@property (nonatomic, readonly) bool requiresEnvironmentValidation;
@property (nonatomic, readonly) bool requiresNextFocusedItem;
@property (getter=shouldScrollIfNecessary, nonatomic) bool scrollIfNecessary;
@property (nonatomic, readonly) bool shouldPerformHapticFeedback;
@property (nonatomic) bool shouldPlayFocusSound;
@property (readonly) Class superclass;

+ (id)requestForRemovingFocusInFocusSystem:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsDeferral;
- (bool)allowsFocusingCurrentItem;
- (bool)allowsOverridingPreferedFocusEnvironments;
- (id)animationCoordinator;
- (void)cacheCurrentFocusSystem;
- (bool)canMergeWithRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)environment;
- (id)focusSystem;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 environment:(id)arg2;
- (id)inputDeviceInfo;
- (bool)isFocusRemovalRequest;
- (bool)isMovementRequest;
- (bool)isValidInFocusSystem:(id)arg1;
- (id)requestByMergingWithRequest:(id)arg1;
- (id)requestByRedirectingRequestToEnvironment:(id)arg1;
- (id)requestByRedirectingRequestToNextContainerEnvironment;
- (bool)requiresEnvironmentValidation;
- (bool)requiresNextFocusedItem;
- (void)setAllowsDeferral:(bool)arg1;
- (void)setAllowsFocusingCurrentItem:(bool)arg1;
- (void)setAllowsOverridingPreferedFocusEnvironments:(bool)arg1;
- (void)setAnimationCoordinator:(id)arg1;
- (void)setScrollIfNecessary:(bool)arg1;
- (void)setShouldPlayFocusSound:(bool)arg1;
- (bool)shouldPerformHapticFeedback;
- (bool)shouldPlayFocusSound;
- (bool)shouldScrollIfNecessary;

@end
