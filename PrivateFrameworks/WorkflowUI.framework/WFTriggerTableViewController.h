
@interface WFTriggerTableViewController : UITableViewController {
    bool  _anyOptionSelected;
    <WFTriggerTableViewControllerDelegate> * _delegate;
    NSString * _mainSectionTitle;
    NSString * _nameOfAnyOption;
    NSArray * _options;
    NSArray * _sections;
}

@property (nonatomic) bool anyOptionSelected;
@property (nonatomic) <WFTriggerTableViewControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *mainSectionTitle;
@property (nonatomic, readonly, copy) NSString *nameOfAnyOption;
@property (nonatomic, retain) NSArray *options;
@property (nonatomic, readonly) NSArray *sections;

- (void).cxx_destruct;
- (bool)anyOptionSelected;
- (void)cancel:(id)arg1;
- (id)delegate;
- (void)done:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithOptions:(id)arg1 anySelected:(bool)arg2 nameOfAnyOption:(id)arg3 mainSectionTitle:(id)arg4;
- (id)mainSectionTitle;
- (id)nameOfAnyOption;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)options;
- (id)sections;
- (void)setAnyOptionSelected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateDoneButtonEnabledState;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
