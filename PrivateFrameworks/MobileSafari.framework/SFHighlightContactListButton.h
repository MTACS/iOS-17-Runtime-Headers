
@interface SFHighlightContactListButton : UIControl {
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
