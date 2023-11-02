
@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView {
    CDRichComplicationImageView * _imageView;
}

@property (nonatomic, retain) CDRichComplicationImageView *imageView;

- (void).cxx_destruct;
- (id)gaugeProviderFromTemplate:(id)arg1;
- (id)imageView;
- (id)innerView;
- (void)setImageView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
