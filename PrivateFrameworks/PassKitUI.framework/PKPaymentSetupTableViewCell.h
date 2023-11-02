
@interface PKPaymentSetupTableViewCell : PKTableViewCell {
    UILabel * _betaLabel;
    UIImageView * _cardImageView;
    UIImageView * _iconImageView;
    bool  _showBetaBadge;
    UIImage * _thumbnail;
    long long  _thumbnailType;
}

@property (nonatomic) bool showBetaBadge;
@property (nonatomic, readonly) UIImage *thumbnail;

+ (struct CGSize { double x1; double x2; })defaultImageViewSize;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShowBetaBadge:(bool)arg1;
- (void)setThumbnail:(id)arg1 type:(long long)arg2 animated:(bool)arg3;
- (bool)showBetaBadge;
- (id)thumbnail;

@end
