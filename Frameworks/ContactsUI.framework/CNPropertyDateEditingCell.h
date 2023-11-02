
@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate, UITextFieldDelegate> {
    UIViewController * _contentViewController;
    NSString * _currentCalendarIdentifier;
    UIDatePicker * _datePicker;
    CNDatePickerContainerView * _datePickerContainerView;
    bool  _shouldEditDatesTextually;
}

@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, retain) NSString *currentCalendarIdentifier;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic, retain) CNDatePickerContainerView *datePickerContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldEditDatesTextually;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (void)applyCalendarAndDate;
- (id)contentViewController;
- (id)currentCalendarIdentifier;
- (void)dateChanged:(id)arg1;
- (id)datePicker;
- (id)datePickerContainerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
- (void)localeUpdated:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)prepareForReuse;
- (void)regainFocus;
- (void)setContentViewController:(id)arg1;
- (void)setCurrentCalendarIdentifier:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDatePickerContainerView:(id)arg1;
- (bool)shouldEditDatesTextually;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;

@end
