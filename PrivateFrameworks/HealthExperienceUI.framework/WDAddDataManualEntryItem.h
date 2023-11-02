
@interface WDAddDataManualEntryItem : NSObject {
    <WDAddDataManualEntryItemDelegate> * _delegate;
    NSNumber * _identifier;
    NSString * _secondaryLabel;
    NSString * _title;
}

@property (nonatomic) <WDAddDataManualEntryItemDelegate> *delegate;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSString *secondaryLabel;
@property (nonatomic, retain) NSString *title;

+ (id)dateItemWithMaximumDate:(id)arg1;
+ (id)dateTimeItemWithMaximumDate:(id)arg1 displayName:(id)arg2;
+ (id)dateTimeItemWithMaximumDate:(id)arg1 highlightWhenEditing:(bool)arg2 displayName:(id)arg3;
+ (id)durationItemWithMaximumDate:(id)arg1;
+ (id)heightPickerItemWithFeetUnitString:(id)arg1 inchUnitString:(id)arg2;
+ (id)multiSelectItemWithEntries:(id)arg1 selectedIndex:(long long)arg2;
+ (id)numericItemWithManualEntryType:(unsigned long long)arg1 numberFormatter:(id)arg2;
+ (id)timeItemWithMaximumDate:(id)arg1;
+ (id)twoPartDateRangeItemWithMaximumEndDate:(id)arg1;
+ (id)twoPartDateTimeItemWithMaximumDate:(id)arg1;

- (void).cxx_destruct;
- (id)_createHXUIInlineDatePickerTableViewCellWithTitle:(id)arg1 datePickerMode:(long long)arg2 maxDate:(id)arg3;
- (id)_createHXUIInlinePickerTableViewCellWithTitle:(id)arg1;
- (id)_createUITableViewCell;
- (id)_createWDManualDataEntryTableViewCellWithDisplayName:(id)arg1 unitName:(id)arg2 entryType:(unsigned long long)arg3 highlightWhenEditing:(bool)arg4;
- (void)_didUpdateValue;
- (void)_disambiguateDateComponents:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)beginEditing;
- (void)cellForItemTapped:(id)arg1;
- (id)delegate;
- (id)generateValue;
- (id)identifier;
- (void)resetItem;
- (id)secondaryLabel;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tableViewCells;
- (id)title;

@end
