
@interface PKAccountInvitationAccessLevelContentView : UIView <UIContentView> {
    <UIContentConfiguration> * _configuration;
    UIImageView * _imageView;
    bool  _isTemplateLayout;
    UILabel * _secondarySubtitleLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) <UIContentConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *secondarySubtitleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_applyConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)configuration;
- (id)imageView;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)secondarySubtitleLabel;
- (void)setConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
