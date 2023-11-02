
@interface TUICandidateMask : UIView {
    UIView * _centerView;
    UIImageView * _leftEdgeImageView;
    NSLayoutConstraint * _leftEdgeWidthConstraint;
    UIImageView * _rightEdgeImageView;
    NSLayoutConstraint * _rightEdgeWidthConstraint;
    <TUICandidateViewStyle> * _style;
}

@property (nonatomic, retain) UIView *centerView;
@property (nonatomic, retain) UIImageView *leftEdgeImageView;
@property (nonatomic, retain) NSLayoutConstraint *leftEdgeWidthConstraint;
@property (nonatomic, retain) UIImageView *rightEdgeImageView;
@property (nonatomic, retain) NSLayoutConstraint *rightEdgeWidthConstraint;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;

- (void).cxx_destruct;
- (void)_updateLayout;
- (id)centerView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftEdgeImageView;
- (id)leftEdgeWidthConstraint;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rightEdgeImageView;
- (id)rightEdgeWidthConstraint;
- (void)setCenterView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEdgeImageView:(id)arg1;
- (void)setLeftEdgeWidthConstraint:(id)arg1;
- (void)setRightEdgeImageView:(id)arg1;
- (void)setRightEdgeWidthConstraint:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
