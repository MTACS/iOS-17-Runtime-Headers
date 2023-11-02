
@interface VUIDebugMetricsEventListViewController : UITableViewController {
    NSArray * _allEvents;
    NSArray * _buttonsInHeader;
    NSArray * _buttonsInHeaderSelected;
    NSArray * _visibleEvents;
}

@property (nonatomic, retain) NSArray *allEvents;
@property (nonatomic, retain) NSArray *buttonsInHeader;
@property (nonatomic, retain) NSArray *buttonsInHeaderSelected;
@property (nonatomic, retain) NSArray *visibleEvents;

- (void).cxx_destruct;
- (void)_buttonClicked:(id)arg1;
- (id)_formatKeyAndValue:(id)arg1 fromEvent:(id)arg2;
- (id)_imageFromPageContext:(id)arg1;
- (id)allEvents;
- (id)buttonsInHeader;
- (id)buttonsInHeaderSelected;
- (void)finishValidation;
- (id)initWithEvents:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAllEvents:(id)arg1;
- (void)setButtonsInHeader:(id)arg1;
- (void)setButtonsInHeaderSelected:(id)arg1;
- (void)setVisibleEvents:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)toggleValidationMode;
- (void)viewDidLoad;
- (id)visibleEvents;

@end
