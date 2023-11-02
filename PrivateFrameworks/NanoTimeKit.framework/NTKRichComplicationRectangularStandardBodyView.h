
@interface NTKRichComplicationRectangularStandardBodyView : NTKRichComplicationRectangularLargeHeadlineBaseView {
    CLKUIColoringLabel * _line1Label;
    CLKUIColoringLabel * _line2Label;
}

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
