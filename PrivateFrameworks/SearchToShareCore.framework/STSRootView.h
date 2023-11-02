
@interface STSRootView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIView * _contentView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) UIView *contentView;

- (void).cxx_destruct;
- (void)_setupView;
- (void)awakeFromNib;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentView:(id)arg1;

@end
