
@interface ContinuousReadingBannerView : UIView {
    UIView * _bottomHairline;
    ContinuousReadingItem * _continuousReadingItem;
    UIImageView * _imageView;
    UILabel * _subtitleLabel;
    SFBannerTheme * _theme;
    UILabel * _titleLabel;
    UIView * _topHairline;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _topHairlineInsets;
}

@property (nonatomic, readonly, retain) ContinuousReadingItem *continuousReadingItem;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) SFBannerTheme *theme;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleRect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } topHairlineInsets;

+ (id)hairlineColor;
+ (id)makeHairlineSeparator;

- (void).cxx_destruct;
- (id)_bottomHairline;
- (struct CGSize { double x1; double x2; })_scaledImageSize;
- (double)_textBaseline;
- (id)_topHairline;
- (void)_updateImage;
- (void)_updateLabels;
- (id)continuousReadingItem;
- (void)dealloc;
- (id)image;
- (id)imageView;
- (id)initWithContinuousReadingItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopHairlineInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)theme;
- (id)title;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })topHairlineInsets;

@end
