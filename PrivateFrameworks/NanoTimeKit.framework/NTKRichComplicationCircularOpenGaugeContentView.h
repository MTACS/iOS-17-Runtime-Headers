
@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {
    UIView * _bottomView;
    CLKUIColoringLabel * _centerLabel;
    CDRichComplicationCurvedProgressView * _progressView;
}

@property (nonatomic, readonly) CLKUIColoringLabel *centerLabel;
@property (nonatomic, readonly) CDRichComplicationCurvedProgressView *progressView;

+ (long long)progressFillStyle;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (long long)_innerFilterStyle;
- (long long)_outerFilterStyle;
- (id)bottomView;
- (id)centerLabel;
- (void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)progressView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
