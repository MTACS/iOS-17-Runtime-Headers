
@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell {
    VUIFavoriteBannerLayout * _bannerLayout;
    VUIFavoriteBannerView * _bannerView;
    double  _width;
}

@property (nonatomic, retain) VUIFavoriteBannerLayout *bannerLayout;
@property (nonatomic, retain) VUIFavoriteBannerView *bannerView;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)bannerLayout;
- (id)bannerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBannerLayout:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)width;

@end
