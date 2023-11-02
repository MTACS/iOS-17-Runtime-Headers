
@interface WDElectrocardiogramAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem * _dateEntryItem;
    WDAddDataManualEntryItem * _electrocardiogramClassificationEntryItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)builderFromDataFile:(id)arg1 startDate:(id)arg2;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)saveHKObjectWithCompletion:(id /* block */)arg1;
- (id)symptomSamplesForElectrocardiogram:(id)arg1;

@end
