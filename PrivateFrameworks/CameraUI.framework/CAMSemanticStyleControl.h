
@interface CAMSemanticStyleControl : UIControl <CEKExpandingSliderDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray * __allSliders;
    UILabel * __descriptionLabel;
    CEKEdgeGradientView * __edgeGradients;
    UIView * __gradientContainer;
    UIButton * __resetButton;
    CEKExpandingSlider * __toneSlider;
    CEKExpandingSlider * __warmthSlider;
    struct { 
        double startInset; 
        double endInset; 
    }  _gradientInsets;
    CAMSemanticStyle * _semanticStyle;
}

@property (nonatomic, readonly) NSMutableArray *_allSliders;
@property (nonatomic, readonly) UILabel *_descriptionLabel;
@property (nonatomic, readonly) CEKEdgeGradientView *_edgeGradients;
@property (nonatomic, readonly) UIView *_gradientContainer;
@property (nonatomic, readonly) UIButton *_resetButton;
@property (nonatomic, readonly) CEKExpandingSlider *_toneSlider;
@property (nonatomic, readonly) CEKExpandingSlider *_warmthSlider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { double x1; double x2; } gradientInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMSemanticStyle *semanticStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allSliders;
- (id)_descriptionLabel;
- (id)_edgeGradients;
- (id)_gradientContainer;
- (void)_handleResetButtonReleased:(id)arg1;
- (void)_handleResetMenuItem:(id)arg1;
- (void)_handleSliderDidChangeValue:(id)arg1;
- (id)_resetButton;
- (id)_toneSlider;
- (void)_updateResetButtonImage;
- (void)_updateSlidersAnimated:(bool)arg1;
- (void)_updateSubviewsVisibilityWithDuration:(double)arg1 delay:(double)arg2;
- (id)_warmthSlider;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canBecomeFirstResponder;
- (struct { double x1; double x2; })gradientInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)semanticStyle;
- (void)setGradientInsets:(struct { double x1; double x2; })arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSemanticStyle:(id)arg1 animated:(bool)arg2;
- (void)sliderWillCollapse:(id)arg1;
- (void)sliderWillExpand:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
