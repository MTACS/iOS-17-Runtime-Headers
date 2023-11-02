
@interface MRUVolumeNowPlayingView : UIView <MRUVisualStylingProviderObserver> {
    long long  _axis;
    UIImage * _icon;
    UIImageView * _imageView;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (long long)axis;
- (id)icon;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAxis:(long long)arg1;
- (void)setIcon:(id)arg1;
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
