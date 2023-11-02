
@interface WDBloodPressureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem * _dateTimeEntryItem;
    WDAddDataManualEntryItem * _diastolicEntryItem;
    WDAddDataManualEntryItem * _systolicEntryItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_systolicAndDiastolicHaveValues;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)validateDataWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;

@end
