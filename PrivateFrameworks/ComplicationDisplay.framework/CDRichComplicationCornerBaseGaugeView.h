
@interface CDRichComplicationCornerBaseGaugeView : CDRichComplicationCornerView {
    CLKUICurvedColoringLabel * _leftLabel;
    CDRichComplicationCurvedProgressView * _progressView;
    CLKUICurvedColoringLabel * _rightLabel;
}

+ (bool)isMeteredProgressView;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (void)_calculateLabel:(id)arg1 center:(struct CGPoint { double x1; double x2; }*)arg2 widthInRadius:(double*)arg3;
- (double)_calculateProgressWidthWithLeftLabelWidth:(double)arg1 rightLabelWidth:(double)arg2;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (double)_layoutLabel:(id)arg1 withLabelCenter:(struct CGPoint { double x1; double x2; })arg2 labelWidthInRadius:(double)arg3 leftInRadius:(double)arg4;
- (double)_layoutProgressViewWithBeginAngle:(double)arg1 widthInRadius:(double)arg2 bottomPadding:(double)arg3;
- (void)_layoutSubviewsWithoutAnimation;
- (double)_progressViewHorizontalPaddingInRadius;
- (void)_replaceProgressView:(long long)arg1;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (void)_updateLabelMaxWidths;
- (void)handleGaugeProvider:(id)arg1 leftLabelProvider:(id)arg2 rightLabelProvider:(id)arg3;
- (void)handleGaugeProvider:(id)arg1 leftTextProvider:(id)arg2 rightTextProvider:(id)arg3;
- (id)initWithFontFallback:(long long)arg1;
- (void)layoutSubviews;
- (id)leftLabel;
- (id)progressView;
- (id)rightLabel;
- (void)setPosition:(long long)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
