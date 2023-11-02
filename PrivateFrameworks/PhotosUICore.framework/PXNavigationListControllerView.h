
@interface PXNavigationListControllerView : UIView {
    UIView * _contentView;
    double  _contentViewHeight;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double contentViewHeight;

- (void).cxx_destruct;
- (void)_updateContentViewFrame;
- (void)addSubview:(id)arg1;
- (id)contentView;
- (double)contentViewHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewHeight:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
