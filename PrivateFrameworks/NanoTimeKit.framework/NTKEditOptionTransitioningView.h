
@interface NTKEditOptionTransitioningView : UIView {
    double  _breathScaleModifier;
    <NTKEditOptionTransitioningViewDelegate> * _delegate;
    NTKEditOption * _fromEditOption;
    UIImageView * _fromTransitionImageView;
    double  _rubberBandScaleModifier;
    NTKEditOption * _toEditOption;
    UIImageView * _toTransitionImageView;
    UIView * _transitionContainer;
    UIView * _transitionDimmingView;
}

@property (nonatomic) <NTKEditOptionTransitioningViewDelegate> *delegate;
@property (nonatomic, retain) NTKEditOption *fromEditOption;
@property (nonatomic, retain) NTKEditOption *toEditOption;

- (void).cxx_destruct;
- (void)_resetTransitionImageView:(id)arg1;
- (void)_updateUnifiedScaleTransform;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (id)fromEditOption;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBreatheFraction:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingAlpha:(double)arg1;
- (void)setFromEditOption:(id)arg1;
- (void)setOption:(id)arg1;
- (void)setRubberBandingFraction:(double)arg1;
- (void)setToEditOption:(id)arg1;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3;
- (id)toEditOption;

@end
