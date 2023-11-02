
@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView {
    CDRichComplicationImageView * _centerImageView;
    CDRichComplicationCurvedProgressView * _progressView;
    CLKUIColoringLabel * _smallLabel;
}

@property (nonatomic, retain) CDRichComplicationImageView *centerImageView;
@property (nonatomic, retain) CDRichComplicationCurvedProgressView *progressView;
@property (nonatomic, retain) CLKUIColoringLabel *smallLabel;

+ (long long)progressFillStyle;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (long long)_innerFilterStyle;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })_layoutConstraintsWithDevice:(id)arg1 family:(long long)arg2;
- (long long)_outerFilterStyle;
- (double)_smallLabelFontWeight;
- (id)centerImageView;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)progressView;
- (void)setCenterImageView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSmallLabel:(id)arg1;
- (id)smallLabel;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
