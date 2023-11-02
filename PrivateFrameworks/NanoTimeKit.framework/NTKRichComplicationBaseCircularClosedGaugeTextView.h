
@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView {
    CLKUIColoringLabel * _centerLabel;
    NTKRichComplicationRingProgressView * _progressView;
}

@property (nonatomic, retain) CLKUIColoringLabel *centerLabel;
@property (nonatomic, retain) NTKRichComplicationRingProgressView *progressView;

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (long long)_innerFilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)centerLabel;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)progressView;
- (void)setCenterLabel:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
