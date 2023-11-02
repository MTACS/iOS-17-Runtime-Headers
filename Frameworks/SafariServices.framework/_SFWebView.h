
@interface _SFWebView : WKWebView <SFDialogViewPresenting> {
    double  _bottomBarHeightAboveKeyboard;
    NSArray * _callStackSymbolsForLastRemovalFromWindow;
    UIView * _clippingView;
    UIView * _contentObscuringView;
    <_SFWebViewDelegate> * _delegate;
    SFDialogView * _dialogView;
    bool  _hasBeenInWindow;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestInsets;
    SFWebFormAccessoryViewWrapper * _inputAccessoryContainerView;
    UIViewController<UIPredictiveViewController> * _inputDashboardViewController;
    long long  _navigationGesturePolicy;
    bool  _obscuringContents;
    double  _placeholderOffset;
    UIImageView * _placeholderView;
    NSTimer * _placeholderViewRemovalTimer;
}

@property (nonatomic) double bottomBarHeightAboveKeyboard;
@property (nonatomic, readonly, copy) NSArray *callStackSymbolsForLastRemovalFromWindow;
@property (nonatomic) UIView *clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFWebViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *evOrganizationName;
@property (nonatomic, readonly) bool hasBeenInWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy;
@property (getter=isObscuringContents, nonatomic) bool obscuringContents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (id)_enclosingViewForExposedRectComputation;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateNavigationGesturesAllowed;
- (bool)becomeFirstResponder;
- (double)bottomBarHeightAboveKeyboard;
- (id)callStackSymbolsForLastRemovalFromWindow;
- (id)clippingView;
- (void)dealloc;
- (id)delegate;
- (void)didEndFormControlInteraction;
- (void)didMoveToWindow;
- (void)didStartFormControlInteraction;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (id)evOrganizationName;
- (bool)hasBeenInWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (id)inputAccessoryView;
- (id)inputDashboardViewController;
- (bool)isObscuringContents;
- (void)layoutSubviews;
- (long long)navigationGesturePolicy;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (void)safeAreaInsetsDidChange;
- (id)scrollViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAllowsBackForwardNavigationGestures:(bool)arg1;
- (void)setBottomBarHeightAboveKeyboard:(double)arg1;
- (void)setClippingView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHitTestInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNavigationGesturePolicy:(long long)arg1;
- (void)setObscuringContents:(bool)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderImage:(id)arg1 offset:(double)arg2;
- (void)setSuggestedFilenameForCurrentBackForwardListItem:(id)arg1;
- (id)undoManager;
- (int)webProcessIDForDialogController:(id)arg1;
- (bool)webui_canPromptForAccountSecurityRecommendation;
- (void)webui_setInputDashboardViewController:(id)arg1;

@end
