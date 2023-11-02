
@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularLargeHeadlineBaseView {
    CLKUIColoringLabel * _bodyLabel;
    NTKRichComplicationLineProgressView * _progressView;
}

@property (nonatomic, readonly) CLKUIColoringLabel *bodyLabel;
@property (nonatomic, readonly) NTKRichComplicationLineProgressView *progressView;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)isMeteredProgressView;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_handleTemplateUpdateWithReason:(long long)arg1 headerViewData:(id)arg2 headerImageProvider:(id)arg3 headerTextProvider:(id)arg4 bodyTextProvider:(id)arg5 gaugeProvider:(id)arg6;
- (id)bodyLabel;
- (id)init;
- (void)layoutSubviews;
- (id)progressView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
