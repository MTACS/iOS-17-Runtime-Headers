
@interface SleepHealthUI.TimeIntervalPickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {
    void $__lazy_storage_$_hourFormatter;
    void $__lazy_storage_$_minuteFormatter;
    void configuration;
    void selectedHourIndex;
    void selectedMinuteIndex;
    void timeIntervalPublisher;
    void timeIntervalSubscriber;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

@end
