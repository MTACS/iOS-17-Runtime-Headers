
@interface SBZoomView : UIView {
    UIView * _contentView;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
