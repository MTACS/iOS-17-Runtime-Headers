
@interface UIInputResponderController : NSObject {
    bool  _automaticAppearanceEnabled;
    bool  _isOnScreen;
    UIResponder * _responder;
    UIWindowScene * _scene;
    bool  _shouldSuppressInputAssistantUpdates;
}

@property (nonatomic) bool automaticAppearanceEnabled;
@property (nonatomic, readonly) bool isOnScreen;
@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, readonly) UIWindowScene *scene;
@property (nonatomic) bool shouldSuppressInputAssistantUpdates;

+ (id)activeInputResponderController;
+ (long long)interfaceOrientation;
+ (void)performOnControllers:(id /* block */)arg1;
+ (void)setInterfaceOrientation:(long long)arg1;

- (void).cxx_destruct;
- (void)_beginDisablingAnimations;
- (void)_endDisablingAnimations;
- (id)_textInputSessionAnalytics;
- (void)addVisibilityObserver:(id)arg1;
- (void)assertNo;
- (bool)automaticAppearanceEnabled;
- (bool)isOnScreen;
- (void)refreshWithLocalMinimumKeyboardHeight:(double)arg1;
- (void)removeVisibilityObserver:(id)arg1;
- (id)responder;
- (id)scene;
- (void)setAutomaticAppearanceEnabled:(bool)arg1;
- (void)setShouldSuppressInputAssistantUpdates:(bool)arg1;
- (bool)shouldSuppressInputAssistantUpdates;
- (double)verticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleInputViewFrameInView:(id)arg1;

@end
