
@interface MRUControlCenterButton : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate> {
    UIView * _backgroundView;
    UIView * _contentView;
    UIImage * _image;
    UIImageView * _imageView;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)contentView;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (id)title;
- (id)titleLabel;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
