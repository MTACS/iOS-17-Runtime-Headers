
@interface PKHeroCardWatchExplainationHeaderView : UIView {
    UIImage * _cardImage;
    UIImageView * _passImageView;
    PKWatchHeroImageView * _watchView;
}

@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } recommendedCardImageSize;

- (void).cxx_destruct;
- (id)_deviceBackgroundColor;
- (bool)_isSmallPhone;
- (id)cardImage;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })recommendedCardImageSize;
- (void)setCardImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
