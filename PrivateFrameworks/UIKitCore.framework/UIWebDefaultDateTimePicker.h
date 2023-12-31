
@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {
    UIDatePicker * _datePicker;
    NSString * _formatString;
    DOMHTMLInputElement * _inputElement;
    bool  _isTimeInput;
    bool  _shouldRemoveTimeZoneInformation;
}

@property (nonatomic, retain) UIDatePicker *_datePicker;
@property (nonatomic, retain) DOMHTMLInputElement *_inputElement;

- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (id)_datePicker;
- (id)_inputElement;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;
- (void)set_datePicker:(id)arg1;
- (void)set_inputElement:(id)arg1;

@end
