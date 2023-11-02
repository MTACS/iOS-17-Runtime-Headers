
@interface NTKDigitalTimeRichComplicationCircularView : NTKRichComplicationCircularBaseTextView {
    NTKDigitalTimeLabel * _timeLabel;
}

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)timeOffsetChanged;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateDate;
- (void)updateMonochromeColor;

@end
