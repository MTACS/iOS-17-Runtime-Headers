
@interface PRXPullDismissalScrollView : UIScrollView {
    bool  _allowsPullToDismiss;
    NSLayoutConstraint * _contentHeightConstraint;
    UIView * _dismissableContentContainerView;
    bool  _hasDimissed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastLayoutFrame;
}

@property (nonatomic) bool allowsPullToDismiss;
@property (nonatomic, readonly) UIView *dismissableContentContainerView;
@property (nonatomic, readonly) double dismissalPercent;

- (void).cxx_destruct;
- (bool)allowsPullToDismiss;
- (void)didMoveToWindow;
- (id)dismissableContentContainerView;
- (double)dismissalPercent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAllowsPullToDismiss:(bool)arg1;
- (void)updateConstraints;

@end
