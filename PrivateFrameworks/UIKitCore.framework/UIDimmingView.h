
@interface UIDimmingView : UIView <UIGestureRecognizerDelegate, _UIEventObserver> {
    NSMutableSet * _additionalEventGestureRecognizers;
    UIImageView * _backgroundGlow;
    UIBlurEffect * _blurEffect;
    <UIDimmingViewDelegate> * _delegate;
    UIColor * _dimmingColor;
    UIBarButtonItem * _highlightedBarButtonItem;
    UIImageView * _highlightedImageView;
    bool  _ignoresTouches;
    bool  _inPassthroughHitTest;
    NSArray * _lowerWindowDismissalGestureViews;
    UIEvent * _observedEventForAdditionalGestures;
    NSArray * _passthroughViews;
    double  _percentDisplayed;
    double  _percentLightened;
    UITapGestureRecognizer * _singleFingerTapRecognizer;
    bool  _suppressesBackdrops;
}

@property (nonatomic, retain) UIBlurEffect *blurEffect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDimmingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *dimmingColor;
@property (nonatomic, readonly) bool displayed;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *highlightedBarButtonItem;
@property (nonatomic) bool hitTestsAsOpaque;
@property (nonatomic) bool ignoresTouches;
@property (nonatomic, copy) NSArray *lowerWindowDismissalGestureViews;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic) double percentDisplayed;
@property (nonatomic) double percentLightened;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesBackdrops;

+ (id)defaultDimmingColor;

- (void).cxx_destruct;
- (id)_backdropViewsToAnimate;
- (void)_clearAdditionalEventGestures;
- (id)_gestureRecognizersForEvent:(id)arg1;
- (void)_queueAdditionalEventGesturesFromView:(id)arg1;
- (void)_sendDelegateDimmingViewWasTapped;
- (void)_simulateTap;
- (id)blurEffect;
- (void)dealloc;
- (id)delegate;
- (id)dimmingColor;
- (void)dimmingRemovalAnimationDidStop;
- (void)display:(bool)arg1;
- (void)display:(bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (bool)displayed;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (id)highlightedBarButtonItem;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)hitTestsAsOpaque;
- (bool)ignoresTouches;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransparentFocusItem;
- (id)lowerWindowDismissalGestureViews;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)passthroughViews;
- (double)percentDisplayed;
- (double)percentLightened;
- (void)setBlurEffect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingColor:(id)arg1;
- (void)setHighlightedBarButtonItem:(id)arg1;
- (void)setHitTestsAsOpaque:(bool)arg1;
- (void)setIgnoresTouches:(bool)arg1;
- (void)setLowerWindowDismissalGestureViews:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPercentDisplayed:(double)arg1;
- (void)setPercentLightened:(double)arg1;
- (void)setSuppressesBackdrops:(bool)arg1;
- (bool)suppressesBackdrops;
- (int)textEffectsVisibilityLevel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackground;
- (void)updateBackgroundColor;
- (void)willMoveToWindow:(id)arg1;

@end
