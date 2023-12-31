
@interface GKContiguousContainerView : UIView {
    bool  _applyOrthogonalConstraints;
    UIView * _baselineView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    double  _overlap;
    NSArray * _replaceableConstraints;
    bool  _vertical;
}

@property (nonatomic) bool applyOrthogonalConstraints;
@property (nonatomic) UIView *baselineView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) double overlap;
@property (nonatomic, retain) NSArray *replaceableConstraints;
@property (nonatomic) bool vertical;

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(bool)arg3;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(bool)arg3 applyOrthogonalConstraints:(bool)arg4;

- (void).cxx_destruct;
- (void)_addContiguousSubviews:(id)arg1;
- (bool)applyOrthogonalConstraints;
- (id)baselineView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)overlap;
- (void)replaceSubviews:(id)arg1;
- (id)replaceableConstraints;
- (void)setApplyOrthogonalConstraints:(bool)arg1;
- (void)setBaselineView:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverlap:(double)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setVertical:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)vertical;
- (id)viewForBaselineLayout;

@end
