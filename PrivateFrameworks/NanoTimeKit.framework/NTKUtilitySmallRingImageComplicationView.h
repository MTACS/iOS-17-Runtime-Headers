
@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView {
    UIView<CDComplicationImageView> * _imageView;
    CLKProgressProvider * _progressProvider;
    NSNumber * _progressUpdateToken;
}

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateWithImageProvider:(id)arg1;
- (void)layoutSubviews;
- (id)ringColor;
- (void)updateRingWithProgressProvider:(id)arg1;

@end
