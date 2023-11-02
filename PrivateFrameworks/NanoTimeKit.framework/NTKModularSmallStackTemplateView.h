
@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {
    UIView<CDComplicationImageView> * _imageView;
    NTKOneColumnModularSmallLayoutAttributes * _layoutAttributes;
    CLKUIColoringLabel * _subtitleLabel;
    CLKUIColoringLabel * _titleLabel;
}

@property (nonatomic, retain) UIView<CDComplicationImageView> *imageView;
@property (nonatomic, retain) CLKUIColoringLabel *subtitleLabel;
@property (nonatomic, retain) CLKUIColoringLabel *titleLabel;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_update;
- (void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
