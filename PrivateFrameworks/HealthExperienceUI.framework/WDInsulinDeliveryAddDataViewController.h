
@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntryItemDelegate, WDAddDataManualEntrySpinnerDataSource> {
    WDAddDataManualEntryItem * _dateTimeEntryItem;
    WDAddDataManualEntrySpinner * _deliveryReasonEntryItem;
}

@property (nonatomic, retain) WDAddDataManualEntryItem *dateTimeEntryItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) WDAddDataManualEntrySpinner *deliveryReasonEntryItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dateTimeEntryItem;
- (id)defaultMetadata;
- (id)deliveryReasonEntryItem;
- (id)generateHKObjects;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (long long)numberOfSections;
- (void)setDateTimeEntryItem:(id)arg1;
- (void)setDeliveryReasonEntryItem:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)validateDataWithCompletion:(id /* block */)arg1;

@end
