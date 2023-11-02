
@interface NTKRichComplicationCircularClosedGaugeContentView : NTKRichComplicationCircularBaseView {
    UIView * _innerView;
    NTKRichComplicationRingProgressView * _progressView;
}

@property (nonatomic, readonly) NTKRichComplicationRingProgressView *progressView;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)gaugeProviderFromTemplate:(id)arg1;
- (id)initWithFamily:(long long)arg1;
- (id)innerView;
- (void)layoutSubviews;
- (id)progressView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
