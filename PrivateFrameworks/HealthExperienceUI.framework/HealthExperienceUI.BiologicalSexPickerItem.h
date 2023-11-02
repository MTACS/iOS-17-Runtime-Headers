
@interface HealthExperienceUI.BiologicalSexPickerItem : NSObject <UIPickerViewDataSource, UIPickerViewDelegate> {
    void currentValue;
    void delegate;
}

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

@end
