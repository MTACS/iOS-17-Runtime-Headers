
@interface PKWatchDeviceAppCarouselView : UIView {
    UIImage * _appIconImage;
    UIImageView * _appIconImageView;
    UIImageView * _carouselImageView;
    PKWatchHeroImageView * _watchDeviceImageView;
}

@property (nonatomic, retain) UIImage *appIconImage;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_appIconSize;
- (id)_carouselViewImage;
- (id)appIconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAppIconImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
