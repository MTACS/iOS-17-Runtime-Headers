
@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem {
    NSDate * _chosenDate;
    NSDateFormatter * _dateFormatter;
    long long  _datePickerMode;
    NSString * _displayName;
    bool  _highlightWhenEditing;
    NSDate * _maximumDate;
    HXUIInlineDatePickerTableViewCell * _tableViewCell;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic) long long datePickerMode;

- (void).cxx_destruct;
- (void)_datePickerDidChange:(id)arg1;
- (void)_generateValue:(id /* block */)arg1;
- (void)_saveDisambiguatedDate:(id)arg1;
- (id)dateFormatter;
- (long long)datePickerMode;
- (id)generateValue;
- (id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(bool)arg2 datePickerMode:(long long)arg3 displayName:(id)arg4;
- (void)setDateFormatter:(id)arg1;
- (void)setDatePickerMode:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tableViewCells;

@end
