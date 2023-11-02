
@interface SBMedusaHostedKeyboardWindow : SBWindow <BSInvalidatable> {
    SBMedusaHostedKeyboardWindowLevelAssertion * _defaultWindowLevelAssertion;
    <UIScenePresenter> * _remoteHostedKeyboardScenePresenter;
    NSMutableArray * _windowLevelAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *windowLevelAssertions;

+ (bool)_isSecure;
+ (bool)autorotates;

- (void).cxx_destruct;
- (bool)_shouldControlAutorotation;
- (void)_updateWindowLevel;
- (void)addWindowLevelAssertion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1 keyboardScene:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (void)medusaHostedKeyboardWindowWillHide:(id)arg1;
- (void)medusaHostedKeyboardWindowWillShow:(id)arg1;
- (id)newWindowLevelAssertionWithPriority:(unsigned long long)arg1 windowLevel:(double)arg2;
- (void)removeWindowLevelAssertion:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setWindowLevelAssertions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)windowLevelAssertions;

@end
