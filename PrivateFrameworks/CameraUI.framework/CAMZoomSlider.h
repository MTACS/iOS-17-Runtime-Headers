
@interface CAMZoomSlider : UISlider {
    bool  __autozooming;
    UIView * __maxTrackMaskView;
    UIView * __minTrackMaskView;
    NSTimer * __visibilityTimer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    <CAMZoomSliderDelegate> * _delegate;
    long long  _layoutStyle;
    bool  _maximumAutozooming;
    bool  _minimumAutozooming;
    long long  _orientation;
    bool  _visibilityTimerSuspended;
}

@property (getter=_isAutozooming, setter=_setAutozooming:, nonatomic) bool _autozooming;
@property (nonatomic, readonly) UIView *_maxTrackMaskView;
@property (nonatomic, readonly) UIView *_minTrackMaskView;
@property (nonatomic, readonly) NSTimer *_visibilityTimer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (getter=isAutozooming, nonatomic, readonly) bool autozooming;
@property (nonatomic) <CAMZoomSliderDelegate> *delegate;
@property (nonatomic) long long layoutStyle;
@property (getter=isMaximumAutozooming, setter=_setMaximumAutozooming:, nonatomic) bool maximumAutozooming;
@property (getter=isMinimumAutozooming, setter=_setMinimumAutozooming:, nonatomic) bool minimumAutozooming;
@property (nonatomic) long long orientation;
@property (getter=isVisibilityTimerSuspended, nonatomic) bool visibilityTimerSuspended;

+ (bool)shouldFadeOutZoomSliderForLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_beginAutozooming;
- (void)_commonCAMZoomSliderInitializationWithLayoutStyle:(long long)arg1;
- (void)_endAutozooming;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_hideZoomSlider:(id)arg1;
- (bool)_isAutozooming;
- (void)_makeInvisibleAnimationDuration:(double)arg1;
- (id)_maxTrackMaskView;
- (id)_minTrackMaskView;
- (void)_setAutozooming:(bool)arg1;
- (void)_setMaximumAutozooming:(bool)arg1;
- (void)_setMinimumAutozooming:(bool)arg1;
- (void)_startVisibilityTimer;
- (void)_stopVisibilityTimer;
- (double)_thumbCenterMaximumXForTrackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_thumbCenterMinimumXForTrackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_thumbCenterXForValue:(float)arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateAutozooming;
- (void)_updateForLayoutStyle;
- (float)_valueForThumbCenterX:(double)arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_visibilityTimer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAutozooming;
- (bool)isMaximumAutozooming;
- (bool)isMinimumAutozooming;
- (bool)isVisibilityTimerSuspended;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)locationOfTouch:(id)arg1;
- (void)makeInvisibleAnimated:(bool)arg1;
- (void)makeVisibleAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setVisibilityTimerSuspended:(bool)arg1;
- (bool)shouldHideForExpiredVisibilityTimer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end