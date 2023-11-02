
@interface SBIconListPageControl : UIPageControl <UIGestureRecognizerDelegate> {
    bool  _actsAsButton;
    double  _cachedDefaultHeight;
    <SBIconListPageControlDelegate> * _delegate;
    _UILegibilitySettings * _legibilitySettings;
    bool  _scrubbing;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSArray * _touchIgnoreRects;
}

@property (nonatomic) bool actsAsButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultHeight;
@property (nonatomic) <SBIconListPageControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEffectivelyVisible, nonatomic, readonly) bool effectivelyVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, copy) NSArray *touchIgnoreRects;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)actsAsButton;
- (void)cancelTapGesture;
- (double)defaultHeight;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEffectivelyVisible;
- (bool)isScrubbing;
- (id)legibilitySettings;
- (void)legibilitySettingsDidChange;
- (void)pageControlCurrentPageDidChange:(id)arg1;
- (void)setActsAsButton:(bool)arg1;
- (void)setButtonHighlighted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setTouchIgnoreRects:(id)arg1;
- (void)tapGestureDidUpdate:(id)arg1;
- (id)tapGestureRecognizer;
- (id)touchIgnoreRects;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
