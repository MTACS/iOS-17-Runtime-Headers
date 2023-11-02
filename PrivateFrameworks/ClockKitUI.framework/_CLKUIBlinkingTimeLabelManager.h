
@interface _CLKUIBlinkingTimeLabelManager : UIView <CLKTimeFormatterObserver, _CLKUITimeLabelManager> {
    bool  _animationsPaused;
    CLKClockTimer * _blinkTimer;
    CLKClockTimerToken * _blinkTimerToken;
    _CLKUIBasicTimeLabelManager * _blinkerLabelManager;
    UILabel * _minutesBlinkerLabel;
    _CLKUIBasicTimeLabelManager * _numbersLabelManager;
    UILabel * _secondsBlinkerLabel;
    bool  _showSeconds;
    CLKTimeFormatter * _timeFormatter;
    bool  _usesIsolatedBlinkerLabel;
}

@property (nonatomic) bool animationsPaused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (nonatomic) bool showSeconds;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (double)_lastLineBaseline;
- (void)_startBlinking;
- (void)_startOrStopBlinking;
- (void)_stopBlinking;
- (void)_updateBlinkerAlphaForSecondFraction:(double)arg1;
- (bool)animationsPaused;
- (void)dealloc;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)arg1;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 timer:(id)arg4 labelFactory:(id /* block */)arg5;
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (void)setAnimationsPaused:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShowSeconds:(bool)arg1;
- (void)setShowsDesignator:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (bool)showSeconds;
- (struct CGSize { double x1; double x2; })sizeThatFits;
- (void)sizeViewToFit;
- (id)textColor;
- (void)timeFormatterReportingLiveTimeDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTimeText;
- (id)view;
- (id)viewForLastBaselineLayout;

@end
