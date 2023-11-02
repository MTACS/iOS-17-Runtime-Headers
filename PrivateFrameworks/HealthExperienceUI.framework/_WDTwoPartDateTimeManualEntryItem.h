
@interface _WDTwoPartDateTimeManualEntryItem : WDAddDataManualEntryItem {
    NSDate * _chosenDate;
    NSDateFormatter * _dateFormatter;
    HXUIInlineDatePickerTableViewCell * _dateTableViewCell;
    NSDate * _maximumDate;
    NSDateFormatter * _timeFormatter;
    HXUIInlineDatePickerTableViewCell * _timeTableViewCell;
}

- (void).cxx_destruct;
- (void)_datePickerDidChange:(id)arg1;
- (void)_generateValue:(id /* block */)arg1;
- (void)_saveDisambiguatedDate:(id)arg1;
- (void)_setupTableViewCells;
- (void)_timePickerDidChange:(id)arg1;
- (void)_updateCellLabels;
- (id)generateValue;
- (id)initWithMaximumDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tableViewCells;

@end
