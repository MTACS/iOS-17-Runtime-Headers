
@interface GKFocusHighlightingCollectionViewCell : UICollectionViewCell {
    double  __gkFocusHighlightCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __gkFocusHighlightInsets;
    UIView * _focusHighlightView;
}

@property (nonatomic) double _gkFocusHighlightCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _gkFocusHighlightInsets;
@property (nonatomic, retain) UIView *focusHighlightView;

- (void).cxx_destruct;
- (double)_gkFocusHighlightCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_gkFocusHighlightInsets;
- (void)awakeFromNib;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusHighlightView;
- (void)initFocusHighlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFocusHighlightView:(id)arg1;
- (void)set_gkFocusHighlightCornerRadius:(double)arg1;
- (void)set_gkFocusHighlightInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateFocusHighlightView;

@end
