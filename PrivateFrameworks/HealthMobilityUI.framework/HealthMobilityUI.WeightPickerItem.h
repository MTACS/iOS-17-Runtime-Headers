
@interface HealthMobilityUI.WeightPickerItem : NSObject <UIPickerViewDataSource, UIPickerViewDelegate> {
    void $__lazy_storage_$_localeAverageWeight;
    void $__lazy_storage_$_localeMaxWeight;
    void $__lazy_storage_$_localeMinWeight;
    void $__lazy_storage_$_localeUnit;
    void currentWeight;
    void delegate;
    void valueFormatter;
}

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

@end
