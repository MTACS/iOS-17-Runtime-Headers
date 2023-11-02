
@interface NTKRichComplicationLineProgressView : CDRichComplicationProgressView {
    long long  _progressFillStyle;
}

@property (nonatomic, readonly) long long progressFillStyle;

- (id)initForFamily:(long long)arg1 device:(id)arg2 progressFillStyle:(long long)arg3;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;
- (long long)progressFillStyle;
- (void)setProgress:(double)arg1;

@end
