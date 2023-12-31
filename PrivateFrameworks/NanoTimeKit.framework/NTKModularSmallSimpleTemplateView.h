
@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {
    UIView<CDComplicationImageView> * _imageView;
    CLKUIColoringLabel * _label;
    long long  _maxDynamicFontSize;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (id)supportedTemplateClasses;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureWithImageTemplate:(id)arg1;
- (void)_configureWithTextTemplate:(id)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (double)_maxTextWidthForDynamicFontSize:(long long)arg1;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
