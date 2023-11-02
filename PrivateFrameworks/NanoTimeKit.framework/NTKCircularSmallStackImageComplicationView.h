
@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView {
    UIView<CDComplicationImageView> * _imageView;
    CLKUIColoringLabel * _label;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
