
@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFLocationPickerViewControllerDelegate, WFTimeRangePickerViewControllerDelegate> {
    NSDateFormatter * _dateFormatter;
    bool  _isArrive;
    bool  _isLocationBasedAlertsEnabled;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isArrive;
@property (nonatomic) bool isLocationBasedAlertsEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)checkLocationAuthorization;
- (id)customSections;
- (id)dateFormatter;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (bool)isArrive;
- (bool)isLocationBasedAlertsEnabled;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)locationPickerDidCancel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentNavigationControllerWithRootViewController:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setIsLocationBasedAlertsEnabled:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (id)textForSummaryFooterView;
- (void)timeRangePickerViewController:(id)arg1 didPickStartTime:(id)arg2 endTime:(id)arg3;
- (void)timeRangePickerViewControllerDidCancel:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
