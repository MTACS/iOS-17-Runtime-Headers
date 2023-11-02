
@interface _UIDatePickerCalendarTimeView : UIView <UIPopoverPresentationControllerDelegate, _UIDatePickerCompactTimeLabelDelegate> {
    NSCalendar * _calendar;
    NSArray * _clockLayoutConstraints;
    NSString * _customFontDesign;
    <_UIDatePickerCalendarTimeViewDelegate> * _delegate;
    bool  _followsSystemHourCycle;
    NSLocale * _locale;
    long long  _minuteInterval;
    _UIDatePickerOverlayPresentation * _presentation;
    bool  _roundsToMinuteInterval;
    _UIDatePickerCalendarTime * _selectedTime;
    bool  _shouldShowTimeLabel;
    bool  _showsTimeLabel;
    UILabel * _timeLabel;
    NSString * _timeLocaleIdentifier;
    _UIDatePickerCompactTimeLabel * _timeTextField;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, copy) NSString *customFontDesign;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDatePickerCalendarTimeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) bool roundsToMinuteInterval;
@property (nonatomic, readonly) _UIDatePickerCalendarTime *selectedTime;
@property (nonatomic) bool shouldShowTimeLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *timeLabel;
@property (nonatomic, readonly) _UIDatePickerCompactTimeLabel *timeTextField;

- (void).cxx_destruct;
- (void)_reload;
- (void)_reloadDateFormatters;
- (void)_setupViewHierarchy;
- (void)_updateClockLayout;
- (void)_updateFonts;
- (void)_updateTextFieldsFromSelectedDateComponents;
- (void)_updateTimeLabelTitleIfNeeded;
- (id)calendar;
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;
- (bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)compactTimeLabelDidBeginEditing:(id)arg1;
- (void)compactTimeLabelDidEndEditing:(id)arg1;
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;
- (id)createDatePickerForCompactTimeLabel:(id)arg1;
- (id)customFontDesign;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)locale;
- (long long)minuteInterval;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)primaryFirstResponder;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedDate:(id)arg3;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedDate:(id)arg3 followsSystemHourCycle:(bool)arg4;
- (bool)roundsToMinuteInterval;
- (id)selectedTime;
- (void)setCustomFontDesign:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setRoundsToMinuteInterval:(bool)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setShouldShowTimeLabel:(bool)arg1;
- (bool)shouldShowTimeLabel;
- (id)timeLabel;
- (id)timeTextField;
- (void)tintColorDidChange;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
