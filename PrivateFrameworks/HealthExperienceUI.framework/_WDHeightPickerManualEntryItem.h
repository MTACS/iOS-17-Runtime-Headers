
@interface _WDHeightPickerManualEntryItem : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSString * _displayName;
    NSString * _feetUnitString;
    NSString * _inchUnitString;
    HXUIInlinePickerTableViewCell * _tableViewCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *feetUnitString;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inchUnitString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateTableViewCell;
- (id)feetUnitString;
- (id)generateValue;
- (id)inchUnitString;
- (id)initWithDisplayName:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)setFeetUnitString:(id)arg1;
- (void)setInchUnitString:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tableViewCells;

@end
