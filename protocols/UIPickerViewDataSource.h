
@protocol UIPickerViewDataSource <NSObject>

@required

- (long long)numberOfComponentsInPickerView:(UIPickerView *)arg1;
- (long long)pickerView:(UIPickerView *)arg1 numberOfRowsInComponent:(long long)arg2;

@end
