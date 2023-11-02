
@interface NTKAlarmRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    CLKUIColoringLabel * _designatorLabel;
    UIImageView * _idleImageView;
    unsigned long long  _layout;
    struct { 
        double timeLabel12HourLayoutFontSize; 
        double timeLabel12HourLayoutMaxWidth; 
        double timeLabel12HourTimeLeadingLayoutBottom; 
        double timeLabel12HourDesignatorLeadingLayoutBottom; 
        double timeLabel24HourLayoutFontSize; 
        double timeLabel24HourLayoutMaxWidth; 
        double timeLabel24HourLayoutBottom; 
        double timeLabelSnoozeLayoutFontSize; 
        double timeLabelSnoozeLayoutMaxWidth; 
        double timeLabelSnoozeLayoutBottom; 
        double designatorLabelFontSize; 
        double designatorLabelMaxWidth; 
        double designatorLabel12HourTimeLeadingLayoutBottom; 
        double designatorLabel12HourDesignatorLeadingLayoutBottom; 
        double snoozeIconTop; 
        double snoozeRingStrokeWidth; 
        double alarmSymbolPointSize; 
        double snoozeSymbolPointSize; 
    }  _layoutConstants;
    UIImageView * _snoozeImageView;
    NTKRichComplicationRingProgressView * _snoozeProgressView;
    CLKUIColoringLabel * _timeLabel;
}

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (long long)_backgroundFilterStyle;
- (long long)_foregroundFilterStyle;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (bool)_pairedDeviceSupportsComplicationSymbols;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)makeBackgroundTransparent;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
