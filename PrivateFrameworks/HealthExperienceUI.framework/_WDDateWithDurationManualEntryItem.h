
@interface _WDDateWithDurationManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem * _durationItem;
    NSDate * _maximumStartDate;
    WDAddDataManualEntryItem * _startItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupEntryItems;
- (void)beginEditing;
- (id)generateValue;
- (id)initWithMaximumDate:(id)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)tableViewCells;

@end
