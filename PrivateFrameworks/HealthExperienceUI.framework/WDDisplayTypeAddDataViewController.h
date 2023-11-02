
@interface WDDisplayTypeAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem * _dateTimeEntryItem;
    WDAddDataManualEntryItem * _valueFieldManualEntryItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WDAddDataManualEntryItem *valueFieldManualEntryItem;

- (void).cxx_destruct;
- (void)_setDefaultValuesIfNecessary;
- (void)_updateManualEntryItemWithCurrentBMI:(id)arg1;
- (id)createValueFieldManualEntryItem;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)setValueFieldManualEntryItem:(id)arg1;
- (void)validateDataWithCompletion:(id /* block */)arg1;
- (id)valueFieldManualEntryItem;
- (void)viewDidLoad;

@end
