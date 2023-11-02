
@interface PKHeroCardExplainationHeaderView : UIView {
    double  _cardBackingHeight;
    double  _cardBottomPadding;
    double  _cardHeight;
    UIView * _cardImageShadowView;
    UIImageView * _cardImageView;
    double  _cardTopPadding;
    bool  _hideBorders;
    unsigned long long  _padding;
    unsigned long long  _size;
    UIActivityIndicatorView * _spinner;
    bool  _usesCompactLayout;
}

@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, readonly) UIImageView *cardImageView;
@property (nonatomic) bool hideBorders;
@property (nonatomic) unsigned long long padding;
@property (nonatomic) unsigned long long size;

+ (struct CGSize { double x1; double x2; })recommendedCardImageSize;

- (void).cxx_destruct;
- (id)cardImage;
- (id)cardImageView;
- (bool)hideBorders;
- (void)hideLoadingContent;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)padding;
- (void)setCardImage:(id)arg1;
- (void)setHideBorders:(bool)arg1;
- (void)setPadding:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)showLoadingContent;
- (unsigned long long)size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCardSizeValues;

@end
