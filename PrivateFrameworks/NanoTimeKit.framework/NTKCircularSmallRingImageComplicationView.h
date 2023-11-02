
@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {
    UIView<CDComplicationImageView> * _imageView;
    CLKProgressProvider * _progressProvider;
    NSNumber * _progressUpdateToken;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (void)updateRingWithProgressProvider:(id)arg1;

@end
