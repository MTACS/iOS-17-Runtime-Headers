
@interface WDCategoryAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem * _categoryValueEntryItem;
    WDAddDataManualEntryItem * _dateEntryItem;
}

@property (nonatomic, readonly) WDAddDataManualEntryItem *categoryValueEntryItem;
@property (nonatomic, readonly) WDAddDataManualEntryItem *dateEntryItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKValueRange *selectedDateRange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_categoryCells;
- (long long)_defaultSelectedIndex;
- (bool)_hasCategoryValueEntryItem;
- (id)_orderedTitlesForCategoryValuePicker;
- (id)categoryValueEntryItem;
- (id)dateEntryItem;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)selectedDateRange;
- (void)updateSavingEnabled;
- (bool)useDuration;
- (bool)useSingleStartAndEndDate;
- (void)validateDataWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;

@end
