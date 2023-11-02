
@interface FBKDeviceChoicesViewController : UITableViewController {
    <FBKDeviceChoiceDelegate> * _choiceDelegate;
    _UIContentUnavailableView * _contentUnavailableView;
    NSSet * _deviceChoices;
    bool  _isMultiSelect;
    NSMutableSet * _selectedDevices;
    NSArray * _sortedChoices;
}

@property (nonatomic) <FBKDeviceChoiceDelegate> *choiceDelegate;
@property (nonatomic, retain) _UIContentUnavailableView *contentUnavailableView;
@property (nonatomic, retain) NSSet *deviceChoices;
@property bool isMultiSelect;
@property (nonatomic, retain) NSMutableSet *selectedDevices;
@property (nonatomic, retain) NSArray *sortedChoices;

- (void).cxx_destruct;
- (id)choiceDelegate;
- (id)contentUnavailableView;
- (id)deviceChoices;
- (void)didCancel;
- (void)didTapDone;
- (void)hideContentUnavailableView;
- (id)init;
- (bool)isMultiSelect;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedDevices;
- (void)setChoiceDelegate:(id)arg1;
- (void)setContentUnavailableView:(id)arg1;
- (void)setDeviceChoices:(id)arg1;
- (void)setIsMultiSelect:(bool)arg1;
- (void)setSelectedDevices:(id)arg1;
- (void)setSortedChoices:(id)arg1;
- (void)showContentUnavailableView;
- (id)sortedChoices;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
