
@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {
    UIView<CLKUIColoringView> * _label;
    double  _labelScale;
}

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)_labelFont;
- (void)_layoutLabel;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2 centerScale:(double)arg3;
- (void)_transitToHighlightState:(bool)arg1 fraction:(double)arg2;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;

@end
