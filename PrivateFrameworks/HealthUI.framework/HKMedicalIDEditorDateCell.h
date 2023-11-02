
@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {
    NSDate * _dateValue;
    UIDatePicker * _picker;
}

@property (nonatomic, retain) NSDate *dateValue;

- (void).cxx_destruct;
- (void)_configureDatePicker;
- (void)_dateChanged:(id)arg1;
- (void)_hideDatePicker;
- (void)_showDatePicker;
- (void)beginEditing;
- (void)commitEditing;
- (id)dateValue;
- (id)formattedValue;
- (void)setDateValue:(id)arg1;

@end
