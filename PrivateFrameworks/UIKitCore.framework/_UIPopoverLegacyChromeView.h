
@interface _UIPopoverLegacyChromeView : _UIPopoverStandardChromeView {
    UIView * _arrowBackgroundView;
    UIView * _arrowView;
    bool  _arrowVisible;
    long long  _backgroundStyle;
    UIVisualEffectView * _blurView;
    UIView * _leftCapView;
    UIView * _maskView;
    bool  _popoverBackgroundColorIsOpaque;
    long long  _requestedBackgroundStyle;
    UIView * _rightCapView;
    bool  _wasPinned;
}

@property (nonatomic, readonly) UIView *arrowView;
@property (nonatomic, readonly) bool hasComponentViews;
@property (nonatomic, readonly) UIView *leftCapView;
@property (nonatomic, readonly) UIView *rightCapView;

+ (double)arrowBase;
+ (double)arrowHeight;

- (void).cxx_destruct;
- (void)_configureEffectView;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_loadNecessaryViews;
- (void)_removeEffectView;
- (void)_resetComponentViews;
- (long long)_resolvedBackgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (void)_updateBackgroundStyle;
- (void)_updateChrome;
- (double)arrowOffset;
- (id)arrowView;
- (id)backgroundEffect;
- (long long)backgroundStyle;
- (void)didMoveToWindow;
- (bool)hasComponentViews;
- (bool)isPinned;
- (void)layoutSubviews;
- (id)leftCapView;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)rightCapView;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)useShortMode;

@end
