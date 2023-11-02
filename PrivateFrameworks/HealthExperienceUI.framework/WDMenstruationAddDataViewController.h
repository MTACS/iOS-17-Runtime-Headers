
@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource> {
    WDAddDataManualEntrySpinner * _isStartOfCycleEntryItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultMetadata;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (long long)numberOfSections;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)useSingleStartAndEndDate;

@end
