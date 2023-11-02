
@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView {
    CLKUIColoringLabel * _centerLabel;
    CDRichComplicationCurvedProgressView * _progressView;
    CLKUIColoringLabel * _smallLabel;
}

@property (nonatomic, retain) CLKUIColoringLabel *centerLabel;
@property (nonatomic, retain) CDRichComplicationCurvedProgressView *progressView;
@property (nonatomic, retain) CLKUIColoringLabel *smallLabel;

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (long long)_innerFilterStyle;
- (long long)_outerFilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)centerLabel;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)progressView;
- (void)setCenterLabel:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSmallLabel:(id)arg1;
- (id)smallLabel;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
