
@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView {
    UIView<CLKUIColoringView> * _label;
    double  _labelRotationInDegree;
    double  _labelScale;
}

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_editingDidEnd;
- (id)_labelFont;
- (void)_layoutLabel;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitToHighlightState:(bool)arg1 fraction:(double)arg2;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;

@end
