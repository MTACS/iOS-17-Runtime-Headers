
@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {
    unsigned long long  _manualEntryType;
    NSNumberFormatter * _numberFormatter;
    WDManualDataEntryTableViewCell * _tableViewCell;
}

@property (nonatomic) unsigned long long manualEntryType;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;

- (void).cxx_destruct;
- (void)beginEditing;
- (id)generateValue;
- (void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2;
- (unsigned long long)manualEntryType;
- (id)numberFormatter;
- (void)setManualEntryType:(unsigned long long)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tableViewCells;

@end
