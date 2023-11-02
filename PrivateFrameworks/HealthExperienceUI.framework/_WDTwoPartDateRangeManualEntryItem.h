
@interface _WDTwoPartDateRangeManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem * _endItem;
    NSDate * _maximumEndDate;
    WDAddDataManualEntryItem * _startItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endItemDidChange;
- (void)_setupEntryItems;
- (void)_startItemDidChange;
- (void)beginEditing;
- (id)generateValue;
- (id)initWithMaximumEndDate:(id)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)tableViewCells;

@end
