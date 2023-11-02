
@interface _UIDatePickerOverlayPresentation : NSObject {
    UIView * _accessoryView;
    bool  _accessoryViewIgnoresDefaultInsets;
    UIDatePicker * _activeDatePicker;
    long long  _activeMode;
    long long  _alignment;
    id /* block */  _containerPresentCompletion;
    _UIDatePickerContainerViewController * _containerViewController;
    bool  _defersAutomaticKeyboardAvoidanceAdjustments;
    <_UIDatePickerOverlayPresentationDelegate> * _delegate;
    id /* block */  _dismissHandler;
    bool  _ignoresPassthroughOnSourceView;
    long long  _overlayAnchor;
    _UIDatePickerOverlayPlatterView * _platterView;
    bool  _presentingContainerViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) bool accessoryViewIgnoresDefaultInsets;
@property (nonatomic, readonly) UIDatePicker *activeDatePicker;
@property (nonatomic, readonly) long long activeMode;
@property (nonatomic) long long alignment;
@property (nonatomic, retain) _UIDatePickerContainerViewController *containerViewController;
@property (nonatomic) bool defersAutomaticKeyboardAvoidanceAdjustments;
@property (nonatomic) <_UIDatePickerOverlayPresentationDelegate> *delegate;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic) bool ignoresPassthroughOnSourceView;
@property (nonatomic, readonly) bool isPresentingOverlay;
@property (nonatomic) long long overlayAnchor;
@property (nonatomic, retain) _UIDatePickerOverlayPlatterView *platterView;
@property (getter=isPresentingContainerViewController, nonatomic) bool presentingContainerViewController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } resolvedSourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, readonly) UIView *sourceView;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustedAnchorPointForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alignment:(unsigned long long)arg2 anchorPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrameForInputSize:(struct CGSize { double x1; double x2; })arg1 outputFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct _UIDatePickerOverlayPlatterLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; })_computedLayoutForPlatterView:(id)arg1;
- (double)_layoutArbiterAnchorAlignmentOffset;
- (struct CGPoint { double x1; double x2; })_normalizedSourcePointForAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 menuFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_overlayAlignment;
- (unsigned long long)_overlayAlignmentEdge;
- (void)_prepareDatePickerPresentationWithCompletion:(id /* block */)arg1;
- (void)_presentNewDatePicker:(id)arg1;
- (void)_transitionToDatePicker:(id)arg1;
- (id)accessoryView;
- (bool)accessoryViewIgnoresDefaultInsets;
- (void)activateEmptyPresentationWithMode:(long long)arg1 onDismiss:(id /* block */)arg2;
- (id)activeDatePicker;
- (long long)activeMode;
- (long long)alignment;
- (void)animateDismissalWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)animatePresentWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)animateReducedMotionTransitionWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)animateTransitionWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)containerViewController;
- (bool)defersAutomaticKeyboardAvoidanceAdjustments;
- (id)delegate;
- (id /* block */)dismissHandler;
- (void)dismissPresentationAnimated:(bool)arg1;
- (bool)ignoresPassthroughOnSourceView;
- (id)initWithSourceView:(id)arg1;
- (bool)isBeingDismissedOrPresented;
- (bool)isPresentingContainerViewController;
- (bool)isPresentingOverlay;
- (long long)overlayAnchor;
- (id)platterView;
- (void)presentDatePicker:(id)arg1 onDismiss:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resolvedSourceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resolvedSourceRect;
- (void)retargetCurrentPresentationToSourceView;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewIgnoresDefaultInsets:(bool)arg1;
- (void)setActiveMode:(long long)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setContainerViewController:(id)arg1;
- (void)setDefersAutomaticKeyboardAvoidanceAdjustments:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setIgnoresPassthroughOnSourceView:(bool)arg1;
- (void)setOverlayAnchor:(long long)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPresentingContainerViewController:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;

@end
