
@interface _UITabBarAccessoryView : UIView {
    UIView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;

- (void).cxx_destruct;
- (void)commonInit;
- (id)contentView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;

@end
