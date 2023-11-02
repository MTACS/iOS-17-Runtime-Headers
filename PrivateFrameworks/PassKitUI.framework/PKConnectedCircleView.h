
@interface PKConnectedCircleView : UIView {
    PKGradientVerticalConnector * _bottomConnector;
    UIView * _targetView;
    PKGradientVerticalConnector * _topConnector;
}

@property (nonatomic, retain) PKGradientVerticalConnector *bottomConnector;
@property (nonatomic, retain) UIView *targetView;
@property (nonatomic, retain) PKGradientVerticalConnector *topConnector;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bottomConnector;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomConnector:(id)arg1;
- (void)setTargetView:(id)arg1;
- (void)setTopConnector:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)targetView;
- (id)topConnector;

@end
