
@interface SUUIChartColumnsView : UIView <SUUIFlexibleSegmentedControlDelegate> {
    NSArray * _allViewControllers;
    long long  _animatingToNumberOfVisibleColumns;
    UIView * _borderView0;
    UIView * _borderView1;
    long long  _columnChangeAnimationCount;
    NSArray * _columnViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIVisualEffectView * _effectView;
    UIView * _headerBackgroundBottomBorder;
    UIView * _headerBackgroundView;
    NSArray * _headerViews;
    long long  _numberOfVisibleColumns;
    SUUIFlexibleSegmentedControl * _segmentedControl;
}

@property (nonatomic, copy) NSArray *chartViewControllers;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfVisibleColumns;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_headerViewAction:(id)arg1;
- (id)_headerViewWithViewControllers:(id)arg1;
- (void)_reloadColumnViews;
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1;
- (id)chartViewControllers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (id)effectView;
- (void)endColumnChangeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfVisibleColumns;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)setChartViewControllers:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfVisibleColumns:(long long)arg1;

@end
