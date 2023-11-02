
@interface _WDMultiSelectManualEntryItem : WDAddDataManualEntryItem {
    long long  _selectedIndex;
    NSArray * _tableViewCells;
    NSArray * _titles;
}

@property (nonatomic) long long selectedIndex;
@property (nonatomic, retain) NSArray *titles;

- (void).cxx_destruct;
- (void)cellForItemTapped:(id)arg1;
- (id)generateValue;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTitles:(id)arg1;
- (id)tableViewCells;
- (id)titles;

@end
