
@protocol UIPickerTableViewContainerDelegate

@required

- (void)_sendCheckedRow:(long long)arg1 inTableView:(UITableView *)arg2 checked:(bool)arg3;
- (bool)_soundsEnabled;
- (bool)_usesCheckSelection;
- (void)setAllowsMultipleSelection:(bool)arg1;

@optional

- (void)_pickerTableViewDidChangeContentOffset:(UIPickerTableView *)arg1;
- (void)pickerTableView:(UIPickerTableView *)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;

@end
