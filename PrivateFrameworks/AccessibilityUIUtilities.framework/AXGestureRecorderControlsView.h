
@interface AXGestureRecorderControlsView : UIView {
    <AXGestureRecorderControlsViewDelegate> * _delegate;
    UIButton * _leftButton;
    UIButton * _middleButton;
    ASTBiggerProgressView * _progressView;
    UIButton * _rightButton;
}

@property (nonatomic) <AXGestureRecorderControlsViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *leftButton;
@property (getter=isLeftButtonEnabled, nonatomic) bool leftButtonEnabled;
@property (nonatomic, retain) UIButton *middleButton;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIButton *rightButton;
@property (getter=isRightButtonEnabled, nonatomic) bool rightButtonEnabled;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLeftButtonEnabled;
- (bool)isRightButtonEnabled;
- (void)layoutSubviews;
- (id)leftButton;
- (id)makeButton;
- (id)middleButton;
- (float)progress;
- (id)rightButton;
- (void)setDelegate:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(bool)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(bool)arg6 animationDuration:(double)arg7 completion:(id /* block */)arg8;
- (void)setLeftButtonEnabled:(bool)arg1;
- (void)setMiddleButton:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightButtonEnabled:(bool)arg1;

@end
