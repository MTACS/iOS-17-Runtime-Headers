
@interface WKDateTimePicker : NSObject <WKFormControl> {
    struct RetainPtr<UIToolbar> { 
        void *m_ptr; 
    }  _accessoryView;
    struct RetainPtr<UIDatePicker> { 
        void *m_ptr; 
    }  _datePicker;
    struct RetainPtr<_UIDatePickerOverlayPresentation> { 
        void *m_ptr; 
    }  _datePickerPresentation;
    NSString * _formatString;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _initialValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    bool  _isDismissingDatePicker;
    WKContentView * _view;
}

@property (nonatomic, readonly) NSString *calendarType;
@property (nonatomic, readonly) double hour;
@property (nonatomic, readonly) double minute;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dateChanged;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (id)calendarType;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (struct RetainPtr<NSDateFormatter> { void *x1; })dateFormatterForPicker;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (void)done:(id)arg1;
- (void)handleDatePickerPresentationDismissal;
- (double)hour;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;
- (double)minute;
- (void)removeDatePickerPresentation;
- (void)reset:(id)arg1;
- (void)setDateTimePickerToInitialValue;
- (void)setHour:(long long)arg1 minute:(long long)arg2;
- (bool)shouldForceGregorianCalendar;
- (void)showDateTimePicker;

@end
