
@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {
    CLKUIColoringLabel * _textLabel;
}

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_updateTextProvider;
- (id)init;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
