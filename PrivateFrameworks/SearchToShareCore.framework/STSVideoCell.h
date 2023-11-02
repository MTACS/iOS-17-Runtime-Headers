
@interface STSVideoCell : STSImageCell {
    NSMutableArray * _constraints;
    UILabel * _durationLabel;
    UIView * _footerContainer;
    UIButton * _playButton;
    id /* block */  _playButtonAction;
    UIImageView * _providerIconView;
    UILabel * _providerLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *duration;
@property (nonatomic, copy) id /* block */ playButtonAction;
@property (nonatomic, retain) UIImage *providerIcon;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_didPressPlay;
- (void)_updateHiddenViewsAnimated:(bool)arg1;
- (id)duration;
- (double)imageAspectRatio;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id /* block */)playButtonAction;
- (void)prepareForReuse;
- (id)providerIcon;
- (id)providerName;
- (void)setDuration:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setPlayButtonAction:(id /* block */)arg1;
- (void)setProviderIcon:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)updateConstraints;

@end
