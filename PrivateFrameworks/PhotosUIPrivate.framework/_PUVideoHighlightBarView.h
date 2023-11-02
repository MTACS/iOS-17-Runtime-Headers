
@interface _PUVideoHighlightBarView : UIView {
    UIView * _barView;
    bool  _expanded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expandedOutsets;
    UIColor * _highlightColor;
}

@property (nonatomic) bool expanded;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expandedOutsets;
@property (nonatomic, retain) UIColor *highlightColor;

- (void).cxx_destruct;
- (bool)expanded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expandedOutsets;
- (id)highlightColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setExpandedOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlightColor:(id)arg1;

@end
