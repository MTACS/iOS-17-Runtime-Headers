
@interface NTKModularSmallRingTemplateView : NTKModularTemplateView {
    UIView<CDComplicationImageView> * _imageView;
    CLKUIColoringLabel * _label;
    float  _level;
    CLKProgressProvider * _progressProvider;
    NSNumber * _progressUpdateToken;
    CLKUIColoringImageView * _stateRing;
}

@property (nonatomic, retain) CLKUIColoringLabel *label;
@property (nonatomic, retain) CLKUIColoringImageView *stateRing;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (id)supportedTemplateClasses;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_refreshRingImage;
- (void)_refreshRingImageWithRing:(id)arg1;
- (void)_update;
- (void)_updateRingWithRingDescription:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setIsXL:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setStateRing:(id)arg1;
- (id)stateRing;
- (void)updateRingWithProgressProvider:(id)arg1;

@end
