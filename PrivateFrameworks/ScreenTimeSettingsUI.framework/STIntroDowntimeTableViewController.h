
@interface STIntroDowntimeTableViewController : UITableViewController {
    STDeviceBedtime * _bedtime;
    long long  _datePickerVisibility;
    NSDateFormatter * _downtimeFormatter;
}

@property (readonly) STDeviceBedtime *bedtime;
@property long long datePickerVisibility;
@property (readonly) NSDateFormatter *downtimeFormatter;

- (void).cxx_destruct;
- (void)_datePickerChanged:(id)arg1;
- (void)_stIntroDowntimeTableViewControllerCommonInit;
- (long long)_tableRowForDatePicker;
- (long long)_tableRowForEndLabelRow;
- (long long)_tableRowForStartLabelRow;
- (id)bedtime;
- (long long)datePickerVisibility;
- (id)downtimeFormatter;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDatePickerVisibility:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
