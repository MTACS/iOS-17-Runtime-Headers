
@interface NTKUpNextImageView : UIView <CLKMonochromeComplicationView, NTKUpNextBaseCellContentsLayerProvider> {
    UIImageView * _backgroundImageView;
    NSString * _compositingFilter;
    UIColor * _fallbackTintColor;
    <CLKMonochromeFilterProvider> * _filterProvider;
    CALayer * _foregroundAccentBackdrop;
    UIImageView * _foregroundAccentImageView;
    UIImageView * _foregroundImageView;
    CLKImageProvider * _imageProvider;
    UIImage * _overrideImage;
    UIImageView * _overrideImageView;
    NTKUpNextBaseCell * _parentCell;
}

@property (nonatomic, retain) NSString *compositingFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *fallbackTintColor;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLKImageProvider *imageProvider;
@property (nonatomic, readonly) UIImage *overrideImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasMultipartImages;
- (void)_updateColors;
- (id)compositingFilter;
- (id)contentsLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsLayerBoundsForLayout:(id)arg1;
- (id)fallbackTintColor;
- (id)filterProvider;
- (id)imageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 parentCell:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)overrideImage;
- (void)setCompositingFilter:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setFallbackTintColor:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setFullColorImage:(id)arg1 tintableImageProvider:(id)arg2;
- (void)setImageProvider:(id)arg1;
- (void)setOverrideImage:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
