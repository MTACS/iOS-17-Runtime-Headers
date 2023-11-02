
@interface _UIDatePickerCalendarView : UIView <UICalendarSelectionSingleDateDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerViewComponent> {
    UICalendarView * _calendarView;
    _UIDatePickerDataModel * _data;
    UIDatePicker * _datePicker;
    struct { 
        unsigned int needsUpdateDate : 1; 
        unsigned int animateUpdateDate : 1; 
        unsigned int isEnabled : 1; 
    }  _flags;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    UICalendarSelectionSingleDate * _selection;
    unsigned long long  _stateUpdatesInFlight;
    _UIDatePickerCalendarTimeView * _timeView;
    _UIDatePickerStyle * _visualStyle;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } appliedInsetsToEdgeOfContent;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, retain) _UIDatePickerDataModel *data;
@property (nonatomic) UIDatePicker *datePicker;
@property (nonatomic, readonly) long long datePickerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeInterval;

- (void).cxx_destruct;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_reload;
- (void)_reloadCalendarView;
- (void)_reloadDateRange;
- (void)_reloadTimeView;
- (void)_setEnabled:(bool)arg1;
- (void)_setNeedsUpdateDateAnimated:(bool)arg1;
- (bool)_shouldDisplayCalendarView;
- (bool)_shouldDisplayTimeView;
- (bool)_shouldUpdateDataForComponents:(id)arg1 date:(id)arg2;
- (bool)_shouldUpdateTimeViewForSelectedTime:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateContentSizeLimitations;
- (void)_updateCustomFonts;
- (void)_updateDataForComponents:(id)arg1;
- (void)_updateDate;
- (void)_updateDateIfNeeded;
- (void)_updateEnabledStyling;
- (void)_updateLayoutMargins;
- (void)_updateModuleVisibility;
- (void)_updateSelectedDay:(id)arg1 animated:(bool)arg2 notify:(bool)arg3;
- (void)_updateSelectedDay:(id)arg1 time:(id)arg2 animated:(bool)arg3 notify:(bool)arg4;
- (void)_updateSelectedTime:(id)arg1 notify:(bool)arg2;
- (void)_updateTimeViewForSelectedDate:(id)arg1 animated:(bool)arg2;
- (void)_workaround66574039_datePickerDidUpdateLayoutMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })appliedInsetsToEdgeOfContent;
- (id)createDatePickerForTimeView:(id)arg1;
- (id)data;
- (id)datePicker;
- (long long)datePickerStyle;
- (bool)dateSelection:(id)arg1 canSelectDate:(id)arg2;
- (void)dateSelection:(id)arg1 didSelectDate:(id)arg2;
- (struct CGSize { double x1; double x2; })defaultSize;
- (void)didChangeCalendar;
- (void)didChangeCustomFontDesign;
- (void)didChangeDateFrom:(id)arg1 animated:(bool)arg2;
- (void)didChangeLocale;
- (void)didChangeMaximumDate;
- (void)didChangeMinimumDate;
- (void)didChangeMinuteInterval;
- (void)didChangeMode;
- (void)didChangeRoundsToMinuteInterval;
- (void)didChangeTimeZone;
- (void)didChangeToday;
- (void)didReset;
- (void)displaySelectedDateAnimated:(bool)arg1;
- (bool)hasDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)primaryFirstResponder;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setData:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)timeView:(id)arg1 didSelectTime:(id)arg2;
- (void)timeViewDidBeginEditing:(id)arg1;
- (void)timeViewDidEndEditing:(id)arg1;
- (void)timeViewWillBecomeFirstResponder:(id)arg1;
- (bool)usesAutoLayout;

@end
