
@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    <WDAddDataManualEntrySpinnerDataSource> * _dataSource;
    NSString * _displayName;
    long long  _selectedPickerViewIndex;
    HXUIInlinePickerTableViewCell * _tableViewCell;
}

@property (nonatomic) long long _wd_deliveryReason;
@property (nonatomic) <WDAddDataManualEntrySpinnerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateTableViewCellValue;
- (long long)_wd_deliveryReason;
- (id)dataSource;
- (id)generateValue;
- (id)initWithDisplayName:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)setDataSource:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)set_wd_deliveryReason:(long long)arg1;
- (id)tableViewCells;

@end
