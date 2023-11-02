
@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView {
    UIView<CDComplicationImageView> * _imageView;
    CLKUIColoringLabel * _label;
    double  _maxDynamicFontSize;
}

@property (nonatomic, retain) UIView<CDComplicationImageView> *imageView;
@property (nonatomic, retain) CLKUIColoringLabel *label;
@property (nonatomic) double maxDynamicFontSize;

+ (double)_imageScaleForTemplate:(id)arg1 forDevice:(id)arg2;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (double)_baselineOffsetForDynamicSize:(long long)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateImageViewWithImageProvider:(id)arg1;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)_updateLabelsForFontChange;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (double)maxDynamicFontSize;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxDynamicFontSize:(double)arg1;
- (void)updateImageViewWithImage:(id)arg1;
- (void)updateLabelWithString:(id)arg1;

@end
