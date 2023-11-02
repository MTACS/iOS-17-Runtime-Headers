
@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {
    WDAddDataManualEntryItem * _heightPickerManualEntryItem;
}

- (void).cxx_destruct;
- (id)_feetUnitString;
- (id)_inchUnitString;
- (bool)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)createValueFieldManualEntryItem;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;

@end
