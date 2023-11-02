
@interface CKMessageHighlightButton : UIView {
    UIView * _backgroundColorView;
    UIView * _backgroundColorViewForCrossFade;
    CAShapeLayer * _blurEffectMaskLayer;
    UIVisualEffectView * _blurEffectView;
    UIButton * _button;
    <CKMessageHighlightButtonDelegate> * _delegate;
    bool  _didUpdate;
    UIImageView * _glyphView;
    UIImageView * _glyphViewForCrossFade;
    bool  _isHighlighted;
}

@property (nonatomic, readonly) UIView *backgroundColorView;
@property (nonatomic, readonly) UIView *backgroundColorViewForCrossFade;
@property (nonatomic, readonly) CAShapeLayer *blurEffectMaskLayer;
@property (nonatomic, readonly) UIVisualEffectView *blurEffectView;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) <CKMessageHighlightButtonDelegate> *delegate;
@property (nonatomic, readonly) bool didUpdate;
@property (nonatomic, readonly) UIImageView *glyphView;
@property (nonatomic, readonly) UIImageView *glyphViewForCrossFade;
@property (nonatomic, readonly) bool isHighlighted;

- (void).cxx_destruct;
- (id)backgroundColorView;
- (id)backgroundColorViewForCrossFade;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })balloonViewFrame;
- (id)blurEffectMaskLayer;
- (id)blurEffectView;
- (id)button;
- (struct CGSize { double x1; double x2; })buttonSize;
- (struct CGSize { double x1; double x2; })buttonSizeWithInsets;
- (void)buttonWasPressed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFrameRelativeToBalloonViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFrameRelativeToBalloonViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transcriptHighlightFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateTranscriptHighlightFrameRelativeToBalloonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)delegate;
- (bool)didUpdate;
- (id)glyphView;
- (id)glyphViewForCrossFade;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithInitialState:(bool)arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)performFadeoutAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)performHideAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)performSelectedAnimation:(id /* block */)arg1;
- (void)performShowAnimation:(id /* block */)arg1;
- (void)performUnselectedDismissAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })replyButtonFrame;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transcriptHighlightSize;
- (BOOL)transcriptOrientation;

@end
