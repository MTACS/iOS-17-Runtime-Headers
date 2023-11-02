
@interface WFBluetoothTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate, WFTriggerTableViewControllerDelegate> {
    NSArray * _allDevices;
}

@property (nonatomic, copy) NSArray *allDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allDevices;
- (void)cell:(id)arg1 didSelectOptionWithLeftViewSelected:(bool)arg2 rightViewSelected:(bool)arg3;
- (id)customSections;
- (void)fetchBluetoothDevices;
- (void)finishWithDevices:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (void)setAllDevices:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(bool)arg2 orSelectedOptions:(id)arg3;
- (void)triggerTableViewControllerDidCancel:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
