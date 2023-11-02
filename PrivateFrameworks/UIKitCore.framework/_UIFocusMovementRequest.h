
@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting> {
    UIFocusSystem * _focusSystem;
    _UIFocusItemInfo * _focusedItemInfo;
    _UIFocusInputDeviceInfo * _inputDeviceInfo;
    _UIFocusMovementInfo * _movementInfo;
    bool  _overridesDeferredFocusUpdate;
    _UIFocusSearchInfo * _searchInfo;
    bool  _shouldPerformHapticFeedback;
    UIWindow * _window;
}

@property (nonatomic, readonly) bool allowsDeferral;
@property (nonatomic, readonly) bool allowsFocusingCurrentItem;
@property (nonatomic, readonly) bool allowsOverridingPreferedFocusEnvironments;
@property (nonatomic, readonly) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIFocusMovementRequest *fallbackRequest;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, retain) _UIFocusItemInfo *focusedItemInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, retain) _UIFocusMovementInfo *movementInfo;
@property (getter=isMovementRequest, nonatomic, readonly) bool movementRequest;
@property (nonatomic) bool overridesDeferredFocusUpdate;
@property (nonatomic, readonly) bool requiresEnvironmentValidation;
@property (nonatomic, readonly) bool requiresNextFocusedItem;
@property (getter=shouldScrollIfNecessary, nonatomic, readonly) bool scrollIfNecessary;
@property (nonatomic, retain) _UIFocusSearchInfo *searchInfo;
@property (nonatomic) bool shouldPerformHapticFeedback;
@property (nonatomic, readonly) bool shouldPlayFocusSound;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindow *window;

- (void).cxx_destruct;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;
- (bool)allowsDeferral;
- (bool)allowsFocusingCurrentItem;
- (bool)allowsOverridingPreferedFocusEnvironments;
- (id)animationCoordinator;
- (id)fallbackRequest;
- (id)focusSystem;
- (id)focusedItemInfo;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 window:(id)arg2;
- (id)inputDeviceInfo;
- (bool)isMovementRequest;
- (id)movementInfo;
- (bool)overridesDeferredFocusUpdate;
- (bool)requiresEnvironmentValidation;
- (bool)requiresNextFocusedItem;
- (id)searchInfo;
- (void)setFocusedItemInfo:(id)arg1;
- (void)setInputDeviceInfo:(id)arg1;
- (void)setMovementInfo:(id)arg1;
- (void)setOverridesDeferredFocusUpdate:(bool)arg1;
- (void)setSearchInfo:(id)arg1;
- (void)setShouldPerformHapticFeedback:(bool)arg1;
- (bool)shouldPerformHapticFeedback;
- (bool)shouldPlayFocusSound;
- (bool)shouldScrollIfNecessary;
- (id)window;

@end
