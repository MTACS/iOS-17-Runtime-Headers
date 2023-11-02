
@interface WFTimeRangePickerViewController : UITableViewController {
    <WFTimeRangePickerViewControllerDelegate> * _delegate;
    NSDate * _endTime;
    NSArray * _sections;
    NSDate * _startTime;
}

@property (nonatomic) <WFTimeRangePickerViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (id)delegate;
- (void)done:(id)arg1;
- (id)endTime;
- (void)endTimeChanged:(id)arg1;
- (id)init;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (void)startTimeChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
