
@interface VUIFavoriteBannerLayout : NSObject {
    UIColor * _backgroundColor;
    double  _bannerMinHeight;
    unsigned long long  _bannerStyle;
    struct _VUICornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    UIColor * _highlightedBackgroundColor;
    TVImageLayout * _imageLayout;
    bool  _isPreModeBanner;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    double  _maxTextWidth;
    double  _subtitleBaseLine;
    VUITextLayout * _subtitleLayout;
    VUITextLayout * _titleLayout;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) double bannerMinHeight;
@property (nonatomic) unsigned long long bannerStyle;
@property (nonatomic) struct _VUICornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) TVImageLayout *imageLayout;
@property (nonatomic) bool isPreModeBanner;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic) double maxTextWidth;
@property (nonatomic) double subtitleBaseLine;
@property (nonatomic, readonly) VUITextLayout *subtitleLayout;
@property (nonatomic, readonly) VUITextLayout *titleLayout;

- (void).cxx_destruct;
- (id)backgroundColor;
- (double)bannerMinHeight;
- (unsigned long long)bannerStyle;
- (unsigned long long)bannerStyleForSizeClass:(long long)arg1;
- (struct _VUICornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (id)highlightedBackgroundColor;
- (id)imageLayout;
- (bool)isPreModeBanner;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (double)maxTextWidth;
- (void)setBackgroundColor:(id)arg1;
- (void)setBannerMinHeight:(double)arg1;
- (void)setBannerStyle:(unsigned long long)arg1;
- (void)setBorderRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setIsPreModeBanner:(bool)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxTextWidth:(double)arg1;
- (void)setSubtitleBaseLine:(double)arg1;
- (double)subtitleBaseLine;
- (id)subtitleLayout;
- (id)titleLayout;

@end
