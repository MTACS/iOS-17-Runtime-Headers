
@interface PRDismissalOverlayView : UIView {
    UIView * _bottomTapRecognizerView;
    <PRDismissalOverlayViewDelegate> * _delegate;
    UIView * _leftTapRecognizerView;
    UIView * _rightTapRecognizerView;
    UIView * _topTapRecognizerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _touchPassthroughRect;
}

@property (nonatomic, retain) UIView *bottomTapRecognizerView;
@property (nonatomic) <PRDismissalOverlayViewDelegate> *delegate;
@property (nonatomic, retain) UIView *leftTapRecognizerView;
@property (nonatomic, retain) UIView *rightTapRecognizerView;
@property (nonatomic, retain) UIView *topTapRecognizerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } touchPassthroughRect;

- (void).cxx_destruct;
- (void)_tapGestureRecognized:(id)arg1;
- (id)bottomTapRecognizerView;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftTapRecognizerView;
- (id)rightTapRecognizerView;
- (void)setBottomTapRecognizerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftTapRecognizerView:(id)arg1;
- (void)setRightTapRecognizerView:(id)arg1;
- (void)setTopTapRecognizerView:(id)arg1;
- (void)setTouchPassthroughRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)topTapRecognizerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })touchPassthroughRect;

@end
