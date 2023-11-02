
@interface NTKRichComplicationBaseCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView {
    CLKUIColoringLabel * _centerLabel;
    CLKUIColoringLabel * _leadingSmallLabel;
    CDRichComplicationCurvedProgressView * _progressView;
    CLKUIColoringLabel * _trailingSmallLabel;
}

@property (nonatomic, retain) CLKUIColoringLabel *centerLabel;
@property (nonatomic, retain) CLKUIColoringLabel *leadingSmallLabel;
@property (nonatomic, retain) CDRichComplicationCurvedProgressView *progressView;
@property (nonatomic, retain) CLKUIColoringLabel *trailingSmallLabel;

+ (long long)progressFillStyle;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (long long)_innerFilterStyle;
- (long long)_outerFilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (id)centerLabel;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)leadingSmallLabel;
- (id)progressView;
- (void)setCenterLabel:(id)arg1;
- (void)setLeadingSmallLabel:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setTrailingSmallLabel:(id)arg1;
- (id)trailingSmallLabel;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
