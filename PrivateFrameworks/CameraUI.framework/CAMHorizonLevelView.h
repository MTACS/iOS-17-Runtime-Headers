
@interface CAMHorizonLevelView : UIView <CAMLevelViewModelChangeObserver> {
    CAMFeedbackController * __feedbackController;
    UIImageView * __horizonLineView;
    UIImageView * __referenceLineLeft;
    UIImageView * __referenceLineRight;
    <CAMHorizonLevelViewDelegate> * _delegate;
    CAMLevelViewModel * _viewModel;
}

@property (nonatomic, readonly) CAMFeedbackController *_feedbackController;
@property (nonatomic, retain) UIImageView *_horizonLineView;
@property (nonatomic, retain) UIImageView *_referenceLineLeft;
@property (nonatomic, retain) UIImageView *_referenceLineRight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMHorizonLevelViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMLevelViewModel *viewModel;

- (void).cxx_destruct;
- (id)_createStrechableLineImage:(id)arg1 lineHeight:(double)arg2 shadowWidth:(double)arg3 shadowHorizontalEdges:(unsigned long long)arg4;
- (void)_drawHorizonLineInContext:(struct CGContext { }*)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 color:(id)arg3;
- (id)_feedbackController;
- (id)_horizonLineView;
- (void)_layoutLineViewsWithMode:(long long)arg1 rotationAngle:(double)arg2;
- (id)_referenceLineLeft;
- (id)_referenceLineRight;
- (double)_shadowWidth;
- (void)_updateSubViewsAlphaWithAlpha:(double)arg1 indicatorMode:(long long)arg2 rotationAngle:(double)arg3;
- (id)delegate;
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;
- (void)setDelegate:(id)arg1;
- (void)set_horizonLineView:(id)arg1;
- (void)set_referenceLineLeft:(id)arg1;
- (void)set_referenceLineRight:(id)arg1;
- (id)viewModel;

@end
