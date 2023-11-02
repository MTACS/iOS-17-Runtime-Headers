
@interface NTKGreenfieldPlaceholderView : UIView <CDComplicationImageView, CLKFullColorImageView> {
    UIColor * _color;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UIImageView * _iconView;
    CLKImageProvider * _imageProvider;
    UIColor * _overrideColor;
    _NTKPieChartView * _uncompletedPieChartView;
    bool  _usesLegibility;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLKImageProvider *imageProvider;
@property (nonatomic, retain) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (id)color;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)filterProvider;
- (id)imageProvider;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideColor;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)setAppIcon:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setUsesLegibility:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (bool)usesLegibility;

@end
