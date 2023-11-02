
@interface CPSVoiceView : UIView {
    UIImageView * _imageView;
    CPSAbridgableLabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) CPSAbridgableLabel *titleLabel;

- (void).cxx_destruct;
- (id)_titleFont;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
