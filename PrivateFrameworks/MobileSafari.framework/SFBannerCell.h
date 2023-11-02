
@interface SFBannerCell : UICollectionViewCell {
    SFBannerBackgroundView * _backgroundView;
    long long  _bannerStyle;
    UIButton * _dismissButton;
    id /* block */  _dismissHandler;
    UILabel * _messageLabel;
    NSArray * _minimalLayoutConstraints;
    NSArray * _prominentLayoutConstraints;
    UILabel * _titleLabel;
}

@property (nonatomic) long long bannerStyle;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)_updateStyle;
- (long long)bannerStyle;
- (void)configureUsingBanner:(id)arg1;
- (id /* block */)dismissHandler;
- (id)focusEffect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setBannerStyle:(long long)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
