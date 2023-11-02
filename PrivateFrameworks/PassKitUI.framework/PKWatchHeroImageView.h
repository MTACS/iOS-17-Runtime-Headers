
@interface PKWatchHeroImageView : UIView {
    UIImageView * _cardArtImageView;
    UILabel * _doneLabel;
    bool  _hideDoneLabel;
    unsigned long long  _size;
    UIImageView * _wallpaperImageView;
    BPSIllustratedWatchView * _watchView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cardFrame;
@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic) bool hideDoneLabel;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) UIImage *wallpaperImage;
@property (nonatomic, readonly) double watchDeviceImageScaleFactor;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } watchScreenCenter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } watchScreenFrame;

+ (struct CGSize { double x1; double x2; })heroWatchImageSize;
+ (struct CGSize { double x1; double x2; })recommendedCardImageSize;

- (void).cxx_destruct;
- (void)_updatedAccessibilityLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cardFrame;
- (id)cardImage;
- (bool)hideDoneLabel;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCardImage:(id)arg1;
- (void)setHideDoneLabel:(bool)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setWallpaperImage:(id)arg1;
- (void)setWallpaperImage:(id)arg1 contentMode:(long long)arg2;
- (unsigned long long)size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spaceBelowCardFrame;
- (id)wallpaperImage;
- (double)watchDeviceImageScaleFactor;
- (struct CGPoint { double x1; double x2; })watchScreenCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })watchScreenFrame;

@end
