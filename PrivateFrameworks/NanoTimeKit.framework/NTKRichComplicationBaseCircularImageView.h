
@interface NTKRichComplicationBaseCircularImageView : NTKRichComplicationCircularBaseView <CDRichComplicationTintedPlatterColorOverridable> {
    CDRichComplicationImageView * _imageView;
}

@property (nonatomic, retain) CDRichComplicationImageView *imageView;

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)imageView;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)setImageView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTintedFraction:(double)arg1;
- (void)setTintedPlatterColor:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
