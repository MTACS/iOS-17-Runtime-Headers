
@interface AVTAdaptativeLayoutView : UIView {
    UIView * _contentView;
    <AVTAdaptativeLayout> * _layout;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) <AVTAdaptativeLayout> *layout;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentView:(id)arg2;
- (id)layout;
- (void)layoutSubviews;
- (void)setLayout:(id)arg1;

@end
