
@interface NTKRichComplicationCornerGaugeImageView : CDRichComplicationCornerGaugeCustomView {
    CDRichComplicationImageView * _imageView;
}

@property (nonatomic, readonly) CDRichComplicationImageView *imageView;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)_outerView;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)imageView;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
